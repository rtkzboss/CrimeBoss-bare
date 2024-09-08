#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IGS_CarryableAnimInstance.generated.h"

class UAnimMontage;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_CarryableAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_CarryableAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void Throw_Event(const UAnimMontage* outMontage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Drop_Event(const UAnimMontage* outMontage);
    
};

