#pragma once
#include "CoreMinimal.h"
#include "IGS_SpecialObjectiveAnimData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_SpecialObjectiveAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* InLoopAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* OutAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* BreakAnim;
    
    UPROPERTY(EditAnywhere)
    float BreakAnimationSpeed;
    
    BF_ANIMATIONS_API FIGS_SpecialObjectiveAnimData();
};

