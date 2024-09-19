#include "IGS_CarAnimsTableRow.h"

FIGS_CarAnimsTableRow::FIGS_CarAnimsTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Car.Type.Sedan"));
    (*this).Idle = TMap<FGameplayTag, UAnimMontage*>{};
    (*this).GetOut_Normal = TMap<FGameplayTag, UAnimMontage*>{};
    (*this).GetOut_Fast = TMap<FGameplayTag, UAnimMontage*>{};
    (*this).GetOutMontages = TMap<FGameplayTag, UAnimMontage*>{};
}
