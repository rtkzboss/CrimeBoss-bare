#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_Carryable_Animations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_TPP_Carryable_Animations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemThrowLow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemObjectThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemObjectThrowLow;
    
    BF_ANIMATIONS_API FIGS_TPP_Carryable_Animations();
};

