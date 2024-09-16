#include "IGS_BTService_WeaponPickupSequence.h"

UIGS_BTService_WeaponPickupSequence::UIGS_BTService_WeaponPickupSequence() {
    (*this).BestPickupWeapon.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupWeapon, 0)) = 255;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}

