#include "IGS_ThirdpersonHolsterAnimation.h"

class UAnimMontage;

FIGS_ThirdpersonHolsterAnimation::FIGS_ThirdpersonHolsterAnimation() {
    (*this).EqipAnimationData.Animations = TArray<UAnimMontage*>{};
}
