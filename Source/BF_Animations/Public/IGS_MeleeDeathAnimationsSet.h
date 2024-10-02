#pragma once
#include "CoreMinimal.h"
#include "IGS_MeleeDeathAnimationsSet.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_MeleeDeathAnimationsSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RightDeathAnimationMontages;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> LeftDeathAnimationMontages;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> UpDeathAnimationMontages;

    BF_ANIMATIONS_API FIGS_MeleeDeathAnimationsSet();
};
