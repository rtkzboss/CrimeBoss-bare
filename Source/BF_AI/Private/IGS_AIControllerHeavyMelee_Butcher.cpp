#include "IGS_AIControllerHeavyMelee_Butcher.h"

AIGS_AIControllerHeavyMelee_Butcher::AIGS_AIControllerHeavyMelee_Butcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SawBrokenAnimation, 0)) = TEXT("Anim.Reaction.ButcherExplode");
}

void AIGS_AIControllerHeavyMelee_Butcher::NotifySawBroke() {
}

