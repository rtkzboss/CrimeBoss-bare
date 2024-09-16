#include "IGS_AvoidanceAnimationTable.h"

FIGS_AvoidanceAnimationTable::FIGS_AvoidanceAnimationTable() {
    (*this).ID = FSoftObjectPath();
    (*this).Stand_Flinch = {};
    (*this).Stand_StepAvoidance_L_Short = {};
    (*this).Stand_StepAvoidance_R_Short = {};
    (*this).Stand_StepAim_L_Short = {};
    (*this).Stand_StepAim_R_Short = {};
    (*this).Stand_StepAvoidance_L_Medium = {};
    (*this).Stand_StepAvoidance_R_Medium = {};
    (*this).Stand_StepAvoidance_L_Long = {};
    (*this).Stand_StepAvoidance_R_Long = {};
    (*this).Crouch_Flinch = {};
    (*this).Crouch_StepAvoidance_L_Short = {};
    (*this).Crouch_StepAvoidance_R_Short = {};
    (*this).Crouch_StepAim_L_Short = {};
    (*this).Crouch_StepAim_R_Short = {};
    (*this).Crouch_StepAvoidance_L_Medium = {};
    (*this).Crouch_StepAvoidance_R_Medium = {};
    (*this).Crouch_StepAvoidance_L_Long = {};
    (*this).Crouch_StepAvoidance_R_Long = {};
    (*this).RollToStandShort = {};
    (*this).RollToCrouchShort = {};
    (*this).RollToStandMedium = {};
    (*this).RollToCrouchMedium = {};
    (*this).RollToStandLong = {};
    (*this).RollToCrouchLong = {};
}
