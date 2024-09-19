#include "BTTask_Knockback.h"
#include "GameFramework/Actor.h"

UBTTask_Knockback::UBTTask_Knockback() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("Actor_Object_2147482521"), AActor::StaticClass());
    (*this).Actor = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("Location"));
    (*this).Location = gen2;
    (*this).Forward = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Front"));
    (*this).Backward = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Back"));
    (*this).Left = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Left"));
    (*this).Right = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Heavy.Right"));
    (*this).NodeName = TEXT("Knockback");
}

