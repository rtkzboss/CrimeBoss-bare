#include "RacketeerLevelGenerator.h"
#include "Modules/ModuleManager.h"
#include "Editor/EditorEngine.h"
#include "Engine.h"
#include "IGS_ConnectionPointExternal.h"
#include "IGS_LevelGeneratorFunctionLibrary.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_BuildConfigurationDataAsset.h"
#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "Factories/DataAssetFactory.h"
#include "FileHelpers.h"

#define LOCTEXT_NAMESPACE "Racketeer"

static void GatherConnectionPoints(ULevel* Level, TArray<FIGS_ConnectionPointData>& Out)
{
	for (AActor* Actor : Level->Actors)
	{
		AIGS_ConnectionPointExternal* CP = Cast<AIGS_ConnectionPointExternal>(Actor);
		if (!CP) continue;
		Out.Emplace(UIGS_LevelGeneratorFunctionLibrary::GetConnectionPointData(CP));
	}
}
static void GenerateBuildConfiguration(ULevel* Level, UIGS_BuildConfigurationDataAsset* Out)
{
	UWorld* LevelWorld = Level->GetTypedOuter<UWorld>();
	Out->Level = LevelWorld;
	Out->ConnectionPoints.Empty();
	Out->Variants.Empty();

	GatherConnectionPoints(Level, Out->ConnectionPoints);
	Out->ConnectionPoints.Sort([](FIGS_ConnectionPointData const& A, FIGS_ConnectionPointData const& B)
		{
			return A.Name.Compare(B.Name) < 0;
		});

	// TODO: variants?
}
static FString GetDerivedDataAssetPath(UPackage* Package, TCHAR const* TypeName)
{
	FString LongPackageName = Package->GetName();
	FString Out = FPackageName::GetLongPackagePath(LongPackageName);
	Out += TEXT("/DA_");
	Out += FPackageName::GetShortName(Package->GetFName());
	Out += TEXT("_");
	Out += TypeName;
	return Out;
}
static FString GetDerivedDataAssetLongName(UPackage* Package, TCHAR const* TypeName)
{
	FString Out = GetDerivedDataAssetPath(Package, TypeName);
	FString ShortName = FPackageName::GetShortName(Out);
	Out += TEXT(".");
	Out += ShortName;
	return Out;
}
static TCHAR const* BuildConfigurationDataAssetTypeName = TEXT("LevelBuilder");
template<class T>
static T* LoadOrCreateDerivedDataAsset(UPackage* Package, TCHAR const* TypeName)
{
	FString DataAssetName = GetDerivedDataAssetLongName(Package, TypeName);

	T* Existing = LoadObject<T>(nullptr, *DataAssetName, nullptr, LOAD_Quiet);
	if (Existing) return Existing;

	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
	UDataAssetFactory* Factory = NewObject<UDataAssetFactory>();

	FString PackageName = FPackageName::ObjectPathToPackageName(DataAssetName);
	FString PackagePath = FPackageName::GetLongPackagePath(PackageName);
	FString AssetName = FPackageName::GetLongPackageAssetName(PackageName);
	check(AssetName == FPackageName::ObjectPathToObjectName(FWideStringView(DataAssetName)));
	UObject* Object = AssetToolsModule.Get().CreateAsset(AssetName, PackagePath, UIGS_BuildConfigurationDataAsset::StaticClass(), Factory);
	if (!Object) return nullptr;
	return CastChecked<T>(Object);
}
static UIGS_BuildConfigurationDataAsset* LoadOrCreateBuildConfigurationDataAsset(UPackage* Package)
{
	return LoadOrCreateDerivedDataAsset<UIGS_BuildConfigurationDataAsset>(Package, BuildConfigurationDataAssetTypeName);
}
static UIGS_BuildConfigurationDataAsset* UpdateBuildConfigurationDataAsset(ULevel* Level)
{
	ALevelScriptActor* LSA = Level->GetLevelScriptActor();
	if (!LSA || !LSA->IsA<AIGS_LevelBuilder_LevelScriptActor>()) return nullptr;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Updating build configuration data asset for %s"), *GetFullNameSafe(Level));

	UIGS_BuildConfigurationDataAsset* BCDA = LoadOrCreateBuildConfigurationDataAsset(Level->GetPackage());
	GenerateBuildConfiguration(Level, BCDA);
	BCDA->Modify(true);
	return BCDA;
}

void FRacketeerLevelGeneratorModule::StartupModule()
{
	FCoreDelegates::OnPostEngineInit.AddRaw(this, &FRacketeerLevelGeneratorModule::HandlePostEngineInit);
	FEditorDelegates::PostSaveWorld.AddRaw(this, &FRacketeerLevelGeneratorModule::HandlePostSaveWorld);
}
void FRacketeerLevelGeneratorModule::HandlePostEngineInit()
{
	//GEngine->OnActorsMoved().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleActorsMovedEvent);
	GEngine->OnComponentTransformChanged().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleComponentTransformChanged);
}
void FRacketeerLevelGeneratorModule::ShutdownModule()
{
	if (GEngine)
	{
		//GEngine->OnActorsMoved().RemoveAll(this);
		GEngine->OnComponentTransformChanged().RemoveAll(this);
	}
	FCoreDelegates::OnPostEngineInit.RemoveAll(this);
	FEditorDelegates::PostSaveWorld.RemoveAll(this);
}

void FRacketeerLevelGeneratorModule::HandlePostSaveWorld(uint32 SaveFlags, UWorld* World, bool bSuccess)
{
	//UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("HandlePostSaveWorld %s"), *GetFullNameSafe(World));
	UIGS_BuildConfigurationDataAsset* BCDA = UpdateBuildConfigurationDataAsset(World->PersistentLevel);
	if (!BCDA) return;
	TArray<UPackage*> PackagesToSave{ BCDA->GetPackage() };
	UEditorLoadingAndSavingUtils::SavePackages(PackagesToSave, true);
}
void FRacketeerLevelGeneratorModule::MarkLevelBuilderDataDirty(ULevel* Level)
{
	UpdateBuildConfigurationDataAsset(Level);
}
//void FRacketeerLevelGeneratorModule::HandleActorsMovedEvent(TArray<AActor*>& Actors)
//{
//	for (AActor* Actor : Actors)
//	{
//		AIGS_ConnectionPointExternal* CP = Cast<AIGS_ConnectionPointExternal>(Actor);
//		if (!CP) continue;
//		UE_LOG(LogRICOLevelGenerator, Display, TEXT("Moved external connection point %s"), *GetFullNameSafe(Actor));
//		MarkLevelBuilderDataDirty(Actor->GetLevel());
//	}
//}
void FRacketeerLevelGeneratorModule::HandleComponentTransformChanged(USceneComponent* Component, ETeleportType Teleport)
{
	AIGS_ConnectionPointExternal* CP = Component->GetOwner<AIGS_ConnectionPointExternal>();
	if (!CP || Component != CP->GetRootComponent()) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Moved connection point %s"), *GetFullNameSafe(Component));
	MarkLevelBuilderDataDirty(CP->GetLevel());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRacketeerLevelGeneratorModule, RacketeerLevelGenerator)
DEFINE_LOG_CATEGORY(LogRICOLevelGenerator);
