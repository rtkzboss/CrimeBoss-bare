#include "IGS_BTService_CopSolveDesiredWeapon.h"

UIGS_BTService_CopSolveDesiredWeapon::UIGS_BTService_CopSolveDesiredWeapon() {
    (*this).MeleeTypeKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MeleeTypeKey, 0)) = 255;
    (*this).DesiredWeaponKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DesiredWeaponKey, 0)) = 255;
    (*this).NodeName = TEXT("Cop Solve Desired Weapon");
}

