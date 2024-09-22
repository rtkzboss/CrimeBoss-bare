#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRICOLevelGenerator, Log, All);

class FRacketeerLevelGeneratorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

protected:
	void MarkLevelBuilderDataDirty(ULevel* Level);

	void HandlePostEngineInit();
	void HandlePostSaveWorld(uint32 SaveFlags, UWorld* World, bool bSuccess);
	//void HandleActorsMovedEvent(TArray<AActor*>& Actors);
	void HandleComponentTransformChanged(USceneComponent* Component, ETeleportType Teleport);

private:
	//TSet<ULevel*> DirtyLevels;
};
