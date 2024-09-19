#include "IGS_AvoidanceAnimationTable.h"

FIGS_AvoidanceAnimationTable::FIGS_AvoidanceAnimationTable() {
    (*this).ID = FSoftObjectPath();
    (*this).Stand_Flinch = TArray<UAnimMontage*>{};
    (*this).Stand_StepAvoidance_L_Short = TArray<UAnimMontage*>{};
    (*this).Stand_StepAvoidance_R_Short = TArray<UAnimMontage*>{};
    (*this).Stand_StepAim_L_Short = TArray<UAnimMontage*>{};
    (*this).Stand_StepAim_R_Short = TArray<UAnimMontage*>{};
    (*this).Stand_StepAvoidance_L_Medium = TArray<UAnimMontage*>{};
    (*this).Stand_StepAvoidance_R_Medium = TArray<UAnimMontage*>{};
    (*this).Stand_StepAvoidance_L_Long = TArray<UAnimMontage*>{};
    (*this).Stand_StepAvoidance_R_Long = TArray<UAnimMontage*>{};
    (*this).Crouch_Flinch = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAvoidance_L_Short = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAvoidance_R_Short = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAim_L_Short = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAim_R_Short = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAvoidance_L_Medium = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAvoidance_R_Medium = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAvoidance_L_Long = TArray<UAnimMontage*>{};
    (*this).Crouch_StepAvoidance_R_Long = TArray<UAnimMontage*>{};
    (*this).RollToStandShort = TArray<UAnimMontage*>{};
    (*this).RollToCrouchShort = TArray<UAnimMontage*>{};
    (*this).RollToStandMedium = TArray<UAnimMontage*>{};
    (*this).RollToCrouchMedium = TArray<UAnimMontage*>{};
    (*this).RollToStandLong = TArray<UAnimMontage*>{};
    (*this).RollToCrouchLong = TArray<UAnimMontage*>{};
}
