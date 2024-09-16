#include "BTTask_SwitchWeaponBB.h"

UBTTask_SwitchWeaponBB::UBTTask_SwitchWeaponBB() {
    (*this).DesiredWeaponKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DesiredWeaponKey, 0)) = 255;
    (*this).NodeName = TEXT("Switch Weapon BB");
}

