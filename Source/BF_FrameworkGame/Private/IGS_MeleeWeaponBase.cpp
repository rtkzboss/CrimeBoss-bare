#include "IGS_MeleeWeaponBase.h"
#include "IGS_SkinHandlerBase.h"
#include "IGS_BasherComponent.h"

AIGS_MeleeWeaponBase::AIGS_MeleeWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_BasherComponent>(TEXT("Basher"));
    auto gen2 = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
    (*this).Basher = gen;
    (*this).SkinHandler = gen2;
    (*this).PrimaryActorTick.bCanEverTick = false;
}

bool AIGS_MeleeWeaponBase::IsAttacking() {
    return false;
}

bool AIGS_MeleeWeaponBase::CanAttack() const {
    return false;
}

