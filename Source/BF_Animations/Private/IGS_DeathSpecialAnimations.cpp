#include "IGS_DeathSpecialAnimations.h"

FIGS_DeathSpecialAnimations::FIGS_DeathSpecialAnimations() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Death.SpecialTypes.Unknown"));
    (*this).DeathAnimationMontages = TArray<UAnimMontage*>{};
    (*this).PhysicalAnimationProfileName = TEXT("FullAnim");
    (*this).UsePhysics = false;
    (*this).OnlyPhysics = false;
}
