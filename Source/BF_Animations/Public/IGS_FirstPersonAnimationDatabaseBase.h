#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ArmsLocomotion.h"
#include "IGS_FirstPersonAdditiveAnimations.h"
#include "IGS_FirstPersonSpecialAnimations.h"
#include "IGS_LinkedGraphDefinition.h"
#include "IGS_FirstPersonAnimationDatabaseBase.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonAnimationDatabaseBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* EquipMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* UnequipMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* EquipWeaponMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* UnequipWeaponMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ArmsLocomotion Locomotion;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_FirstPersonAdditiveAnimations Additive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_FirstPersonSpecialAnimations SpecialAnimations;

    UPROPERTY(EditAnywhere)
    TArray<FIGS_LinkedGraphDefinition> LinkedGraphs;

    FIGS_FirstPersonAnimationDatabaseBase();
};
