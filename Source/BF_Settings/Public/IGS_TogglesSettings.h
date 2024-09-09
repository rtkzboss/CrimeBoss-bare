#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsBase.h"
#include "IGS_TogglesSettings.generated.h"

class UIGS_TogglesSettings;

UCLASS(BlueprintType, DefaultConfig)
class BF_SETTINGS_API UIGS_TogglesSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UIGS_TogglesSettings();

    UFUNCTION(BlueprintPure)
    static UIGS_TogglesSettings* Instance();
    
    UPROPERTY(Config, EditAnywhere)
    bool bSprintToggleable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCrouchToggleable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAimToggleable;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSprintInterruptsReload;
    
    UPROPERTY(Config, EditAnywhere)
    bool bMagCheckInSprintAllowed;
    
};

