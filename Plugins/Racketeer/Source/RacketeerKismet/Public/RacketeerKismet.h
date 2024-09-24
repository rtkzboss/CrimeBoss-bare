#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FRICOGraphPanelPinFactory;

class FRacketeerKismetModule : public IModuleInterface
{
public:
	FRacketeerKismetModule();

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	TSharedRef<FRICOGraphPanelPinFactory> GraphPanelPinFactory;
};
