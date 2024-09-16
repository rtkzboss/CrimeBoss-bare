#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_Attack_MontageHolder.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_TPP_Attack_MontageHolder {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimMontage* ActiveAttackMontage;

    UPROPERTY()
    UAnimMontage* ActiveWeaponAttackMontage;

    BF_ANIMATIONS_API FIGS_TPP_Attack_MontageHolder();
};
