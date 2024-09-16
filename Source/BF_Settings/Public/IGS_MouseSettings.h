#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsBase.h"
#include "IGS_MouseSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig)
class BF_SETTINGS_API UIGS_MouseSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UIGS_MouseSettings();

    UFUNCTION(BlueprintPure)
    static UIGS_MouseSettings* Instance();

    UPROPERTY(Config, EditAnywhere)
    float MouseSensitivity;

    UPROPERTY(Config, EditAnywhere)
    bool InvertedVerticalLook;

    UPROPERTY(EditAnywhere)
    float MouseSensitivityStepSize;

    UPROPERTY(EditAnywhere)
    float MinMouseSensitivity;

    UPROPERTY(EditAnywhere)
    float MaxMouseSensitivity;

};
