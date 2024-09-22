#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

struct FAssetRenameData;

DECLARE_LOG_CATEGORY_EXTERN(LogRICOLevelGenerator, Log, All);

class FRacketeerLevelGeneratorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

protected:
	void MarkBuildConfigurationDirty(ULevel* Level);

	void HandlePostEngineInit();
	void HandlePostSaveWorld(uint32 SaveFlags, UWorld* World, bool bSuccess);
	//void HandleActorsMovedEvent(TArray<AActor*>& Actors);
	void HandleComponentTransformChanged(USceneComponent* Component, ETeleportType Teleport);
	void HandleLevelActorListChanged();
	void HandleLevelActorAdded(AActor* Actor);
	void HandleLevelActorDeleted(AActor* Actor);
	void HandleActorLabelChanged(AActor* Actor);
	void HandleObjectModified(UObject* Object);
	//void HandleAssetPostRename(TArray<FAssetRenameData> const& Data);
	void HandleAssetRenamed(const FAssetData& Data, const FString& OldName);
	//void HandleAssetRemoved(const FAssetData& Data);
	void HandleAssetsAddExtraObjectsToDelete(TArray<UObject*>& Objects);

private:
	//TSet<ULevel*> DirtyLevels;
};
