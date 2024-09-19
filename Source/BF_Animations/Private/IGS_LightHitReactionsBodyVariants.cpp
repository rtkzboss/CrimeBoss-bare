#include "IGS_LightHitReactionsBodyVariants.h"

FIGS_LightHitReactionsBodyVariants::FIGS_LightHitReactionsBodyVariants() {
    (*this).UpperBody = TArray<UAnimMontage*>{};
    (*this).LowerBody = TArray<UAnimMontage*>{};
    (*this).head = TArray<UAnimMontage*>{};
}
