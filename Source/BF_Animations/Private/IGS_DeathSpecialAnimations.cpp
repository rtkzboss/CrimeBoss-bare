#include "IGS_DeathSpecialAnimations.h"

FIGS_DeathSpecialAnimations::FIGS_DeathSpecialAnimations() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Death.SpecialTypes.Unknown");
    (*this).DeathAnimationMontages = {};
    (*this).PhysicalAnimationProfileName = TEXT("FullAnim");
    (*this).UsePhysics = false;
    (*this).OnlyPhysics = false;
}
