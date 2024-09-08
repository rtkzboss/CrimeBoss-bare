#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IGS_TPP_PostProcessAnimInstance.generated.h"

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_TPP_PostProcessAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 LODLevel;
    
    UPROPERTY(BlueprintReadOnly)
    bool DeathAnimationEnded;
    
    UIGS_TPP_PostProcessAnimInstance();

};

