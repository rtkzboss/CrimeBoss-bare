#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilitySpec.h"
#include "IGS_SubControllerCommon.h"
#include "IGS_SubControllerHuman.generated.h"

class ACharacter;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class UIGS_SubControllerHuman : public UIGS_SubControllerCommon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGameplayAbilitySpecHandle m_RunningAbilitySpecHandle;
    
public:
    UIGS_SubControllerHuman(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnMoveModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);
    
private:
    UFUNCTION(Reliable, Server)
    void MessageToServer_StopUsingVehicle();
    
};

