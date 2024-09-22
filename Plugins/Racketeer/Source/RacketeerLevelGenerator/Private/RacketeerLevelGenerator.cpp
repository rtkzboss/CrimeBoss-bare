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

static ULevel* AffectsBuildConfiguration(AActor const* Actor)
{
	return Actor && Actor->IsA<AIGS_ConnectionPointExternal>() ? Actor->GetLevel() : nullptr;
}
static ULevel* AffectsBuildConfiguration(UActorComponent const* Component)
{
	if (!Component) return nullptr;
	AIGS_ConnectionPointExternal* CP = Component->GetOwner<AIGS_ConnectionPointExternal>();
	return CP && Component == CP->GetRootComponent() ? CP->GetLevel() : nullptr;
}

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
	if (Level->HasAnyFlags(RF_Transient)) return nullptr;
	//ALevelScriptActor* LSA = Level->GetLevelScriptActor();
	//if (!LSA || !LSA->IsA<AIGS_LevelBuilder_LevelScriptActor>()) return nullptr;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Updating build configuration data asset for %s"), *GetFullNameSafe(Level));

	UIGS_BuildConfigurationDataAsset* BCDA = LoadOrCreateBuildConfigurationDataAsset(Level->GetPackage());
	GenerateBuildConfiguration(Level, BCDA);
	BCDA->Modify(true);
	return BCDA;
}

void FRacketeerLevelGeneratorModule::StartupModule()
{
	FCoreDelegates::OnPostEngineInit.AddRaw(this, &FRacketeerLevelGeneratorModule::HandlePostEngineInit);
	FCoreDelegates::OnActorLabelChanged.AddRaw(this, &FRacketeerLevelGeneratorModule::HandleActorLabelChanged);
	FCoreUObjectDelegates::OnObjectModified.AddRaw(this, &FRacketeerLevelGeneratorModule::HandleObjectModified);
	FEditorDelegates::PostSaveWorld.AddRaw(this, &FRacketeerLevelGeneratorModule::HandlePostSaveWorld);
	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
	//AssetToolsModule.Get().OnAssetPostRename().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleAssetPostRename);
}
void FRacketeerLevelGeneratorModule::HandlePostEngineInit()
{
	//GEngine->OnActorsMoved().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleActorsMovedEvent);
	GEngine->OnComponentTransformChanged().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleComponentTransformChanged);
	GEngine->OnLevelActorListChanged().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorListChanged);
	GEngine->OnLevelActorAdded().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorAdded);
	GEngine->OnLevelActorDeleted().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorDeleted);
	//GEngine->OnLevelActorRequestRename().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorRequestRename);
	//if (FAssetToolsModule* AssetToolsModule = FModuleManager::GetModulePtr<FAssetToolsModule>("AssetTools"))
	//{
	//	AssetToolsModule->Get().OnAssetPostRename().RemoveAll(this);
	//}
}
void FRacketeerLevelGeneratorModule::ShutdownModule()
{
	if (GEngine)
	{
		//GEngine->OnActorsMoved().RemoveAll(this);
		GEngine->OnComponentTransformChanged().RemoveAll(this);
		GEngine->OnLevelActorListChanged().RemoveAll(this);
		GEngine->OnLevelActorAdded().RemoveAll(this);
		GEngine->OnLevelActorDeleted().RemoveAll(this);
		GEngine->OnLevelActorRequestRename().RemoveAll(this);
	}
	FCoreDelegates::OnPostEngineInit.RemoveAll(this);
	FCoreDelegates::OnActorLabelChanged.RemoveAll(this);
	FCoreUObjectDelegates::OnObjectModified.RemoveAll(this);
	FEditorDelegates::PostSaveWorld.RemoveAll(this);
}

void FRacketeerLevelGeneratorModule::HandlePostSaveWorld(uint32 SaveFlags, UWorld* World, bool bSuccess)
{
	UIGS_BuildConfigurationDataAsset* BCDA = UpdateBuildConfigurationDataAsset(World->PersistentLevel);
	if (!BCDA) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Save BCDA %s"), *GetFullNameSafe(BCDA));
	TArray<UPackage*> PackagesToSave{ BCDA->GetPackage() };
	UEditorLoadingAndSavingUtils::SavePackages(PackagesToSave, true);
}
void FRacketeerLevelGeneratorModule::MarkBuildConfigurationDirty(ULevel* Level)
{
	UpdateBuildConfigurationDataAsset(Level);
}
void FRacketeerLevelGeneratorModule::HandleComponentTransformChanged(USceneComponent* Component, ETeleportType Teleport)
{
	ULevel* Level = AffectsBuildConfiguration(Component);
	if (!Level) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Moved connection point %s"), *GetFullNameSafe(Component));
	MarkBuildConfigurationDirty(Level);
}
void FRacketeerLevelGeneratorModule::HandleLevelActorListChanged()
{
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Actor list changed"));
}
void FRacketeerLevelGeneratorModule::HandleLevelActorAdded(AActor* Actor)
{
	ULevel* Level = AffectsBuildConfiguration(Actor);
	if (!Level) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Added connection point %s"), *GetFullNameSafe(Actor));
	MarkBuildConfigurationDirty(Level);
}
void FRacketeerLevelGeneratorModule::HandleLevelActorDeleted(AActor* Actor)
{
	ULevel* Level = AffectsBuildConfiguration(Actor);
	if (!Level) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Deleted connection point %s"), *GetFullNameSafe(Actor));
	MarkBuildConfigurationDirty(Level);
}
void FRacketeerLevelGeneratorModule::HandleActorLabelChanged(AActor* Actor)
{
	ULevel* Level = AffectsBuildConfiguration(Actor);
	if (!Level) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Changed connection point name %s"), *GetFullNameSafe(Actor));
	MarkBuildConfigurationDirty(Level);
}
void FRacketeerLevelGeneratorModule::HandleObjectModified(UObject* Object)
{
	ULevel* Level = AffectsBuildConfiguration(Cast<AActor>(Object));
	if (!Level) return;
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Connection point changed %s"), *GetFullNameSafe(Object));
	MarkBuildConfigurationDirty(Level);
}
//void FRacketeerLevelGeneratorModule::HandleAssetPostRename(TArray<FAssetRenameData> const& Datas)
//{
//	TArray<ULevel*> Levels;
//	for (FAssetRenameData const& Data : Datas)
//	{
//		AActor* Actor = Cast<AActor>(Data.Asset.Get());
//		ULevel* Level = AffectsBuildConfiguration(Actor);
//		if (!Level) continue;
//		UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Renamed connection point %s"), *GetFullNameSafe(Actor));
//		Levels.AddUnique(Level);
//	}
//	for (ULevel* Level : Levels)
//	{
//		MarkBuildConfigurationDirty(Level);
//	}
//}
//void FRacketeerLevelGeneratorModule::HandleLevelActorRequestRename(AActor const* Actor)
//{
//	ULevel* Level = AffectsBuildConfiguration(Actor);
//	if (!Level) return;
//	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Renamed connection point %s"), *GetFullNameSafe(Actor));
//	MarkBuildConfigurationDirty(Level);
//}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FRacketeerLevelGeneratorModule, RacketeerLevelGenerator)
DEFINE_LOG_CATEGORY(LogRICOLevelGenerator);
