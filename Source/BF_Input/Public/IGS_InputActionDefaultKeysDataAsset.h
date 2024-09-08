#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DefaultInputDeviceSingleSetting.h"
#include "IGS_InputActionDefaultKeysDataAsset.generated.h"

UCLASS()
class BF_INPUT_API UIGS_InputActionDefaultKeysDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_DefaultInputDeviceSingleSetting KeyboardDefaultKeyInputs;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_DefaultInputDeviceSingleSetting GamepadDefaultKeyInputs;
    
    UIGS_InputActionDefaultKeysDataAsset();

};

