#pragma once
#include "CoreMinimal.h"
#include "IGS_AttackAnimtionDefinition.h"
#include "IGS_FirstPersonAnimationDatabaseBase.h"
#include "IGS_ModAnimationDefinition.h"
#include "IGS_FirstPersonAnimationDatabase.generated.h"

class AIGS_WeaponBase;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonAnimationDatabase : public FIGS_FirstPersonAnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_WeaponBase> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_AttackAnimtionDefinition> AttackType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FirstEquipMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CheckMagazineMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Melee;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleePush;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Inspect;

    UPROPERTY(EditAnywhere)
    bool OneHandCalmWeaponPose;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CheckMagazineWeaponMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* InspectWeapon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FirstWeaponEquipMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleeWeaponMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleePushMontage;

    UPROPERTY(EditAnywhere)
    TArray<FIGS_ModAnimationDefinition> ModInfo;

    FIGS_FirstPersonAnimationDatabase();
};
