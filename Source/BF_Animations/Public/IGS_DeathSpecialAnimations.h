#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_DeathSpecialAnimations.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_DeathSpecialAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> DeathAnimationMontages;

    UPROPERTY(EditAnywhere)
    FName PhysicalAnimationProfileName;

    UPROPERTY(EditAnywhere)
    bool UsePhysics;

    UPROPERTY(EditAnywhere)
    bool OnlyPhysics;

    BF_ANIMATIONS_API FIGS_DeathSpecialAnimations();
};
