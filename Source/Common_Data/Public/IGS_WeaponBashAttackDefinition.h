#pragma once
#include "CoreMinimal.h"
#include "IGS_DamageTypeBase.h"
#include "IGS_ImpactTypeObject.h"
#include "EIGS_MeleeAttackType.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponBashAttackDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponBashAttackDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MeleeAttackType AttackType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_DamageTypeBase> DamageType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> ImpactType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseDamage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxRange;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceRadius;

    FIGS_WeaponBashAttackDefinition();
};
