#include "IGS_LightHitReactionsVariant.h"

class UAnimMontage;

FIGS_LightHitReactionsVariant::FIGS_LightHitReactionsVariant() {
    (*this).Front.UpperBody = TArray<UAnimMontage*>{};
    (*this).Front.LowerBody = TArray<UAnimMontage*>{};
    (*this).Front.head = TArray<UAnimMontage*>{};
    (*this).Right.UpperBody = TArray<UAnimMontage*>{};
    (*this).Right.LowerBody = TArray<UAnimMontage*>{};
    (*this).Right.head = TArray<UAnimMontage*>{};
    (*this).Back.UpperBody = TArray<UAnimMontage*>{};
    (*this).Back.LowerBody = TArray<UAnimMontage*>{};
    (*this).Back.head = TArray<UAnimMontage*>{};
    (*this).Left.UpperBody = TArray<UAnimMontage*>{};
    (*this).Left.LowerBody = TArray<UAnimMontage*>{};
    (*this).Left.head = TArray<UAnimMontage*>{};
}
