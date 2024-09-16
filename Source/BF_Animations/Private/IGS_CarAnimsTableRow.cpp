#include "IGS_CarAnimsTableRow.h"

FIGS_CarAnimsTableRow::FIGS_CarAnimsTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Car.Type.Sedan");
    (*this).Idle = {};
    (*this).GetOut_Normal = {};
    (*this).GetOut_Fast = {};
    (*this).GetOutMontages = {};
}
