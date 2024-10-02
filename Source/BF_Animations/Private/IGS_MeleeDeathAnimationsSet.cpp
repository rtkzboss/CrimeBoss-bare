#include "IGS_MeleeDeathAnimationsSet.h"

FIGS_MeleeDeathAnimationsSet::FIGS_MeleeDeathAnimationsSet() {
    (*this).RightDeathAnimationMontages = TArray<UAnimMontage*>{};
    (*this).LeftDeathAnimationMontages = TArray<UAnimMontage*>{};
    (*this).UpDeathAnimationMontages = TArray<UAnimMontage*>{};
}
