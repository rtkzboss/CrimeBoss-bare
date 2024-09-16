#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_TPVAnimtionDefinition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_TPVAnimtionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_WeaponAttackType AttackType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponFireStandFront;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponFireStandFrontInjured;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponFire_WeaponActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReload;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadEmptyMagazine;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombat;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombatEmptyMagazine;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadCheck;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadCheck_Weapon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReload_WeaponActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadEmptyMagazine_WeaponActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombat_WeaponActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadCombatEmptyMagazine_WeaponActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsMontageLooping;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ShooterChangeMontage;

    UPROPERTY(EditAnywhere)
    float AttackPlayRate;

    FIGS_TPVAnimtionDefinition();
};
