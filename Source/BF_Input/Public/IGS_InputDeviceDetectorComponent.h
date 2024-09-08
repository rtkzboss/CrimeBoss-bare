#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_InputDevice.h"
#include "IGS_InputDeviceDetectorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_INPUT_API UIGS_InputDeviceDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float GamepadDeadzone;
    
    UIGS_InputDeviceDetectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    EIGS_InputDevice GetCurrentInputDevice() const;
    
};

