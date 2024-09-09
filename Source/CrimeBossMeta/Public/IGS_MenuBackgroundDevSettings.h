#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_MenuBackgroundDevSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_CrimeBossMetaSettings")
class CRIMEBOSSMETA_API UIGS_MenuBackgroundDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_MenuBackgroundDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> BossBackgroundDataTable;
    
};

