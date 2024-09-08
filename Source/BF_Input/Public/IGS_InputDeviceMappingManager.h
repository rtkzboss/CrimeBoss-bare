#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "EIGS_InputDevice.h"
#include "IGS_InputDeviceMappingManager.generated.h"

class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;

UCLASS(BlueprintType)
class BF_INPUT_API UIGS_InputDeviceMappingManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UIGS_InputDeviceIconsDataAsset* PS5InputDeviceIconDataAsset;
    
    UPROPERTY()
    UIGS_InputDeviceIconsDataAsset* XBOXInputDeviceIconDataAsset;
    
    UPROPERTY()
    UIGS_InputDeviceIconsDataAsset* SteamDeckInputDeviceIconDataAsset;
    
    UPROPERTY()
    UIGS_InputDeviceIconsDataAsset* PCInputDeviceIconDataAsset;
    
    UPROPERTY()
    UIGS_InputActionMapDataAsset* InputActionMapDataAsset;
    
    UIGS_InputDeviceMappingManager();

    UFUNCTION(BlueprintCallable)
    void GetInputActionSymbolBP(FKey inKey, EIGS_InputDevice inInputDevice, FName& outSymbol);
    
};

