#include "IGS_UPlayerAnimationComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"

UIGS_UPlayerAnimationComponent::UIGS_UPlayerAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("Physics_Animation"));
    (*this).CombatTimerAlpha = 1.000000000e+00f;
    (*this).UnarmedUnholsterTime = 5.000000000e-01f;
    (*this).SkipAnimationHolsterTime = 5.000000000e-01f;
    (*this).AimInSpeed = 1.500000000e+01f;
    (*this).AimOutSpeed = 1.200000000e+01f;
    (*this).m_Physical_animation = gen;
    (*this).FirstEquip = true;
    (*this).SlideTransitionEndDuration = 1.000000015e-01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_UPlayerAnimationComponent::OnWeaponChange() const {
}

