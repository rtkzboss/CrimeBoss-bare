#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AnalogControllerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class BF_INPUT_API UIGS_AnalogControllerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_AnalogControllerSettings();

private:
    UPROPERTY(Config, EditAnywhere)
    float BaseTurnRate;

    UPROPERTY(Config, EditAnywhere)
    float BaseLookUpRate;

    UPROPERTY(Config, EditAnywhere)
    float RightTriggerReleaseValue;

    UPROPERTY(Config, EditAnywhere)
    float RightTriggerPressValue;

    UPROPERTY(Config, EditAnywhere)
    float RightStickExponent;

    UPROPERTY(Config, EditAnywhere)
    float MinSensitivityRatio;

    UPROPERTY(Config, EditAnywhere)
    float MaxSensitivityRatio;

    UPROPERTY(Config, EditAnywhere)
    float SensitivityStepSize;

    UPROPERTY(Config, EditAnywhere)
    float MinADSMultiplierRatio;

    UPROPERTY(Config, EditAnywhere)
    float MaxADSMultiplierRatio;

    UPROPERTY(Config, EditAnywhere)
    float UserADSMultiplier;

    UPROPERTY(Config, EditAnywhere)
    float BaseADSMultiplier;

};
