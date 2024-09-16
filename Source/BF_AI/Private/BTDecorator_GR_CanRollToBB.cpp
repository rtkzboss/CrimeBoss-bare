#include "BTDecorator_GR_CanRollToBB.h"

UBTDecorator_GR_CanRollToBB::UBTDecorator_GR_CanRollToBB() {
    (*this).TargetLocation.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TargetLocation, 0)) = 255;
    (*this).OutAnimTag.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutAnimTag, 0)) = 255;
    (*this).DotProductTolerance = 5.000000075e-02f;
    auto gen2 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).RollShortForward, 0)) = TEXT("Anim.Roll.ToStand.Short");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).RollMediumForward, 0)) = TEXT("Anim.Roll.ToStand.Medium");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).RollLongForward, 0)) = TEXT("Anim.Roll.ToStand.Long");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).DodgeShortLeft, 0)) = TEXT("Anim.Dodge.Step.Short.Left");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).DodgeMediumLeft, 0)) = TEXT("Anim.Dodge.Step.Medium.Left");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).DodgeShortRight, 0)) = TEXT("Anim.Dodge.Step.Short.Right");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).DodgeMediumRight, 0)) = TEXT("Anim.Dodge.Step.Medium.Right");
    (*this).TeamSidesWithRoll = {};
    (*this).NodeName = TEXT("Can Roll to BB");
}

