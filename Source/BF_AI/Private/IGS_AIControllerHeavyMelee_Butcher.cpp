#include "IGS_AIControllerHeavyMelee_Butcher.h"

AIGS_AIControllerHeavyMelee_Butcher::AIGS_AIControllerHeavyMelee_Butcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SawBrokenAnimation = FGameplayTag::RequestGameplayTag(TEXT("Anim.Reaction.ButcherExplode"));
}

void AIGS_AIControllerHeavyMelee_Butcher::NotifySawBroke() {
}

