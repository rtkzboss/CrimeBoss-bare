#include "BTTask_Knockback.h"

UBTTask_Knockback::UBTTask_Knockback() {
    (*this).Actor.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).Actor, 0)) = 255;
    (*this).Location.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).Location, 0)) = 255;
    (*this).Forward = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Front"));
    (*this).Backward = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Back"));
    (*this).Left = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Left"));
    (*this).Right = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Right"));
    (*this).NodeName = TEXT("Knockback");
}

