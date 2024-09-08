#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsBase.h"
#include "IGS_ControllerSettings.generated.h"

class UIGS_ControllerSettings;

UCLASS(BlueprintType, DefaultConfig, Config=Inherit)
class BF_SETTINGS_API UIGS_ControllerSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float ControllerSensitivity;
    
    UPROPERTY(Config, EditAnywhere)
    bool InvertedVerticalLook;
    
    UPROPERTY(Config, EditAnywhere)
    float LeftDeadzone;
    
    UPROPERTY(Config, EditAnywhere)
    float RightDeadzone;
    
    UPROPERTY(Config, EditAnywhere)
    float ADSMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float AimAssistMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseLinearControllerCurve;
    
    UPROPERTY(Config, EditAnywhere)
    int32 VibrationIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldPrioritizeUseInsteadOfReload;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSwapPingWithDropItemControls;
    
    UIGS_ControllerSettings();

    UFUNCTION(BlueprintPure)
    static UIGS_ControllerSettings* Instance();
    
    UFUNCTION(BlueprintPure)
    float GetRightTriggerReleaseThreshold() const;
    
    UFUNCTION(BlueprintPure)
    float GetRightTriggerPressThreshold() const;
    
};

