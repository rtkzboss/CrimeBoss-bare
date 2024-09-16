#include "BTTask_Knockback.h"

UBTTask_Knockback::UBTTask_Knockback() {
    (*this).Actor.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).Actor, 0)) = 255;
    (*this).Location.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).Location, 0)) = 255;
    auto gen2 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).Forward, 0)) = TEXT("Anim.HitReaction.Heavy.Front");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).Backward, 0)) = TEXT("Anim.HitReaction.Heavy.Back");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).Left, 0)) = TEXT("Anim.HitReaction.Heavy.Left");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).Right, 0)) = TEXT("Anim.HitReaction.Heavy.Right");
    (*this).NodeName = TEXT("Knockback");
}

