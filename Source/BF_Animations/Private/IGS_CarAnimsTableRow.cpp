#include "IGS_CarAnimsTableRow.h"

FIGS_CarAnimsTableRow::FIGS_CarAnimsTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Car.Type.Sedan"));
    (*this).Idle = {};
    (*this).GetOut_Normal = {};
    (*this).GetOut_Fast = {};
    (*this).GetOutMontages = {};
}
