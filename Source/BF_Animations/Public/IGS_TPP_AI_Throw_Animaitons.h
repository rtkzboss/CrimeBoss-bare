#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_AI_Throw_Animaitons.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_TPP_AI_Throw_Animaitons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* ThrowGrenadeStandUp;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ThrowGrenadeStandUp02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThrowGrenadeStandDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThrowGrenadeCrouchUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThrowGrenadeCrouchUp02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThrowGrenadeCrouchDown;
    
    BF_ANIMATIONS_API FIGS_TPP_AI_Throw_Animaitons();
};

