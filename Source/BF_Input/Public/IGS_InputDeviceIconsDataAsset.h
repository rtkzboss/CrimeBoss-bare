#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "IGS_InputDeviceButtonData.h"
#include "IGS_InputDeviceIconsDataAsset.generated.h"

UCLASS()
class BF_INPUT_API UIGS_InputDeviceIconsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FKey, FIGS_InputDeviceButtonData> ButtonIconData;
    
    UIGS_InputDeviceIconsDataAsset();

};

