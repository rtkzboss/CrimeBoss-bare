#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_ArmsAnimtionDefinition.h"
#include "IGS_WeaponAnimtionDefinition.h"
#include "IGS_AttackAnimtionDefinition.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AttackAnimtionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_WeaponAttackType AttackType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ArmsAnimtionDefinition ArmsAnimations;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAnimtionDefinition WeaponAnimations;

    UPROPERTY(EditAnywhere)
    float AttackPlayRate;

    UPROPERTY(EditAnywhere)
    float ReloadPlayRate;

    FIGS_AttackAnimtionDefinition();
};
