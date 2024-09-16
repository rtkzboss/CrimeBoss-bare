#include "IGS_BTService_EvaluatePickupWeapons.h"

UIGS_BTService_EvaluatePickupWeapons::UIGS_BTService_EvaluatePickupWeapons() {
    (*this).BestWeaponPickup.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestWeaponPickup, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Pickup Weapons");
}

