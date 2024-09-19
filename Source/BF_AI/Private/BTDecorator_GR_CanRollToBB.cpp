#include "BTDecorator_GR_CanRollToBB.h"

UBTDecorator_GR_CanRollToBB::UBTDecorator_GR_CanRollToBB() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("TargetLocation"));
    (*this).TargetLocation = gen;
    FBlackboardKeySelector gen2;
    gen2.AddNameFilter(this, TEXT("OutAnimTag"));
    (*this).OutAnimTag = gen2;
    (*this).DotProductTolerance = 5.000000075e-02f;
    (*this).RollShortForward = FGameplayTag::RequestGameplayTag(TEXT("Anim.Roll.ToStand.Short"));
    (*this).RollMediumForward = FGameplayTag::RequestGameplayTag(TEXT("Anim.Roll.ToStand.Medium"));
    (*this).RollLongForward = FGameplayTag::RequestGameplayTag(TEXT("Anim.Roll.ToStand.Long"));
    (*this).DodgeShortLeft = FGameplayTag::RequestGameplayTag(TEXT("Anim.Dodge.Step.Short.Left"));
    (*this).DodgeMediumLeft = FGameplayTag::RequestGameplayTag(TEXT("Anim.Dodge.Step.Medium.Left"));
    (*this).DodgeShortRight = FGameplayTag::RequestGameplayTag(TEXT("Anim.Dodge.Step.Short.Right"));
    (*this).DodgeMediumRight = FGameplayTag::RequestGameplayTag(TEXT("Anim.Dodge.Step.Medium.Right"));
    (*this).TeamSidesWithRoll = TSet<EIGS_TeamSideEnum>{};
    (*this).NodeName = TEXT("Can Roll to BB");
}

