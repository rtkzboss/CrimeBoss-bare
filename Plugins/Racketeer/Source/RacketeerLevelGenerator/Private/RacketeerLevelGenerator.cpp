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
#include "AssetRegistryModule.h"
#include "IAssetRegistry.h"
#include "ObjectTools.h"

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
static bool GenerateBuildConfiguration(ULevel* Level, UIGS_BuildConfigurationDataAsset* Out)
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
	return Out->ConnectionPoints.Num() > 0;
}
static FString GetDerivedDataAssetPath(FString const& LongPackageName, TCHAR const* TypeName)
{
	FString Out = FPackageName::GetLongPackagePath(LongPackageName);
	Out += TEXT("/DA_");
	Out += FPackageName::GetShortName(LongPackageName);
	Out += TEXT("_");
	Out += TypeName;
	return Out;
}
static FString GetDerivedDataAssetLongName(FString const& LongPackageName, TCHAR const* TypeName)
{
	FString Out = GetDerivedDataAssetPath(LongPackageName, TypeName);
	FString ShortName = FPackageName::GetShortName(Out);
	Out += TEXT(".");
	Out += ShortName;
	return Out;
}
static TCHAR const* BuildConfigurationDataAssetTypeName = TEXT("LevelBuilder");
template<class T>
static T* TryLoadDerivedDataAsset(UPackage* Package, TCHAR const* TypeName)
{
	FString DataAssetName = GetDerivedDataAssetLongName(Package->GetName(), TypeName);
	return LoadObject<T>(nullptr, *DataAssetName, nullptr, LOAD_Quiet);
}
template<class T>
static T* LoadOrCreateDerivedDataAsset(UPackage* Package, TCHAR const* TypeName)
{
	FString DataAssetName = GetDerivedDataAssetLongName(Package->GetName(), TypeName);

	T* Existing = LoadObject<T>(nullptr, *DataAssetName, nullptr, LOAD_Quiet);
	if (Existing) return Existing;

	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
	UDataAssetFactory* Factory = NewObject<UDataAssetFactory>();

	FString PackageName = FPackageName::ObjectPathToPackageName(DataAssetName);
	FString PackagePath = FPackageName::GetLongPackagePath(PackageName);
	FString AssetName = FPackageName::GetLongPackageAssetName(PackageName);
	check(AssetName == FPackageName::ObjectPathToObjectName(FStringView(DataAssetName)));
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
	FEditorDelegates::OnAssetsAddExtraObjectsToDelete.AddRaw(this, &FRacketeerLevelGeneratorModule::HandleAssetsAddExtraObjectsToDelete);
	//FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
	//AssetToolsModule.Get().OnAssetPostRename().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleAssetPostRename);
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	AssetRegistryModule.Get().OnAssetRenamed().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleAssetRenamed);
	//AssetRegistryModule.Get().OnAssetRemoved().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleAssetRemoved);
}
void FRacketeerLevelGeneratorModule::HandlePostEngineInit()
{
	//GEngine->OnActorsMoved().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleActorsMovedEvent);
	GEngine->OnComponentTransformChanged().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleComponentTransformChanged);
	GEngine->OnLevelActorListChanged().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorListChanged);
	GEngine->OnLevelActorAdded().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorAdded);
	GEngine->OnLevelActorDeleted().AddRaw(this, &FRacketeerLevelGeneratorModule::HandleLevelActorDeleted);
}
void FRacketeerLevelGeneratorModule::ShutdownModule()
{
	FCoreDelegates::OnPostEngineInit.RemoveAll(this);
	FCoreDelegates::OnActorLabelChanged.RemoveAll(this);
	FCoreUObjectDelegates::OnObjectModified.RemoveAll(this);
	FEditorDelegates::PostSaveWorld.RemoveAll(this);
	FEditorDelegates::OnAssetsAddExtraObjectsToDelete.RemoveAll(this);
	//if (FAssetToolsModule* AssetToolsModule = FModuleManager::GetModulePtr<FAssetToolsModule>("AssetTools"))
	//{
	//	AssetToolsModule->Get().OnAssetPostRename().RemoveAll(this);
	//}
	if (FAssetRegistryModule* AssetRegistryModule = FModuleManager::GetModulePtr<FAssetRegistryModule>("AssetRegistry"))
	{
		AssetRegistryModule->Get().OnAssetRenamed().RemoveAll(this);
		//AssetRegistryModule->Get().OnAssetRemoved().RemoveAll(this);
	}
	if (GEngine)
	{
		//GEngine->OnActorsMoved().RemoveAll(this);
		GEngine->OnComponentTransformChanged().RemoveAll(this);
		GEngine->OnLevelActorListChanged().RemoveAll(this);
		GEngine->OnLevelActorAdded().RemoveAll(this);
		GEngine->OnLevelActorDeleted().RemoveAll(this);
	}
}

void FRacketeerLevelGeneratorModule::HandlePostSaveWorld(uint32 SaveFlags, UWorld* World, bool bSuccess)
{
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("World saved %s %u"), *GetFullNameSafe(World), SaveFlags);
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
//	TArray<FAssetRenameData> ToRename;
//	for (FAssetRenameData const& Data : Datas)
//	{
//		UWorld* World = Cast<UWorld>(Data.Asset.Get());
//		if (!World) continue;
//		FString OldBCDAPath = GetDerivedDataAssetLongName(Data.OldObjectPath.GetLongPackageName(), BuildConfigurationDataAssetTypeName);
//		if (!FPackageName::DoesPackageExist(FPackageName::ObjectPathToPackageName(OldBCDAPath))) continue;
//		FString NewBCDAPath = GetDerivedDataAssetLongName(Data.NewObjectPath.GetLongPackageName(), BuildConfigurationDataAssetTypeName);
//		UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Renaming BCDA %s -> %s"), *OldBCDAPath, *NewBCDAPath);
//		ToRename.Add(FAssetRenameData(OldBCDAPath, NewBCDAPath));
//	}
//	if (!ToRename.Num()) return;
//	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
//	AssetToolsModule.Get().RenameAssets(ToRename);
//}
void FRacketeerLevelGeneratorModule::HandleAssetRenamed(const FAssetData& Data, const FString& OldName)
{
	// there is no rename equivalent to FEditorDelegates::OnAssetsAddExtraObjectsToDelete, so we have to do it handle it here
	if (Data.AssetClass != UWorld::StaticClass()->GetFName()) return;

	FString OldBCDAPath = GetDerivedDataAssetLongName(FPackageName::ObjectPathToPackageName(OldName), BuildConfigurationDataAssetTypeName);
	if (!FPackageName::DoesPackageExist(FPackageName::ObjectPathToPackageName(OldBCDAPath))) return;

	FString NewBCDAPath = GetDerivedDataAssetLongName(Data.PackagePath.ToString(), BuildConfigurationDataAssetTypeName);
	UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Renaming BCDA %s -> %s"), *OldBCDAPath, *NewBCDAPath);
	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
	AssetToolsModule.Get().RenameAssets({ FAssetRenameData(OldBCDAPath, NewBCDAPath) });
}
void FRacketeerLevelGeneratorModule::HandleAssetsAddExtraObjectsToDelete(TArray<UObject*>& Objects)
{
	for (int32 I = 0; I < Objects.Num(); ++I)
	{
		UWorld* World = Cast<UWorld>(Objects[I]);
		if (!World) continue;
		UIGS_BuildConfigurationDataAsset* BCDA = TryLoadDerivedDataAsset<UIGS_BuildConfigurationDataAsset>(World->GetPackage(), BuildConfigurationDataAssetTypeName);
		if (!BCDA) continue;
		UE_LOG(LogRICOLevelGenerator, Verbose, TEXT("Flagging %s for deletion"), *GetFullNameSafe(BCDA));
		Objects.AddUnique(BCDA);
	}
}
//void FRacketeerLevelGeneratorModule::HandleAssetRemoved(const FAssetData& Data)
//{
//	if (!(Data.PackageFlags & PKG_ContainsMap)) return;
//	FString OldBCDAPath = GetDerivedDataAssetLongName(Data.PackageName.ToString(), BuildConfigurationDataAssetTypeName);
//
//	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
//	AssetRegistryModule.Get().GetAssetByObjectPath(FName(OldBCDAPath));
//	ObjectTools::AddExtraObjectsToDelete
//	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
//	AssetToolsModule.Get().
//}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FRacketeerLevelGeneratorModule, RacketeerLevelGenerator)
DEFINE_LOG_CATEGORY(LogRICOLevelGenerator);
