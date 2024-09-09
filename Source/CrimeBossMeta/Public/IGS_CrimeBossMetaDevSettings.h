#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_CrimeBossMetaDevSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_CrimeBossMetaSettings")
class CRIMEBOSSMETA_API UIGS_CrimeBossMetaDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_CrimeBossMetaDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> PlotlineAssetsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> RandEventsDataTable;
    
};

