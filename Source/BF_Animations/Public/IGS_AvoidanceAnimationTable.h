#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_AvoidanceAnimationTable.generated.h"

class AIGS_WeaponBase;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AvoidanceAnimationTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_WeaponBase> ID;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_Flinch;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAvoidance_L_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAvoidance_R_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAim_L_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAim_R_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAvoidance_L_Medium;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAvoidance_R_Medium;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAvoidance_L_Long;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Stand_StepAvoidance_R_Long;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_Flinch;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAvoidance_L_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAvoidance_R_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAim_L_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAim_R_Short;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAvoidance_L_Medium;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAvoidance_R_Medium;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAvoidance_L_Long;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Crouch_StepAvoidance_R_Long;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RollToStandShort;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RollToCrouchShort;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RollToStandMedium;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RollToCrouchMedium;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RollToStandLong;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> RollToCrouchLong;

    FIGS_AvoidanceAnimationTable();
};
