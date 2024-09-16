#include "IGS_WeaponRecoilComponent.h"

UIGS_WeaponRecoilComponent::UIGS_WeaponRecoilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_WeaponRecoilComponent::Reinit() {
}

void UIGS_WeaponRecoilComponent::AddRecoil() {
}

