#pragma once
#include "CoreMinimal.h"
#include "IGS_DeathAnimationsSet.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_DeathAnimationsSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> DeathAnimationMontages;

    BF_ANIMATIONS_API FIGS_DeathAnimationsSet();
};
