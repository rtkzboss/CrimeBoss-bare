#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ArmsLocomotion.h"
#include "IGS_FirstPersonAdditiveAnimations.h"
#include "IGS_FirstPersonSpecialAnimations.h"
#include "IGS_LinkedGraphDefinition.h"
#include "IGS_FirstPersonMeleeAnimDatabase.generated.h"

class AIGS_MeleeWeaponBase;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonMeleeAnimDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_MeleeWeaponBase> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* EquipMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* UnequipMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> Attack_Light_Chain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> Attack_Heavy_Chain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleePushMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MarkMontage;
    
    UPROPERTY(EditAnywhere)
    bool OneHandCalmWeaponPose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MeleePush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* EquipWeaponMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* UnequipWeaponMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> WeaponAttack_Light_Chain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> WeaponAttack_Heavy_Chain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MarkWeaponMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ArmsLocomotion Locomotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_FirstPersonAdditiveAnimations Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_FirstPersonSpecialAnimations SpecialAnimations;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_LinkedGraphDefinition> LinkedGraphs;
    
    FIGS_FirstPersonMeleeAnimDatabase();
};

