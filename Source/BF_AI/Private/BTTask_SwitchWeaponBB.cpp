#include "BTTask_SwitchWeaponBB.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"

UBTTask_SwitchWeaponBB::UBTTask_SwitchWeaponBB() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("DesiredWeaponKey_Enum_2147482475"), StaticEnum<EIGS_SwitchWeaponTask_WeaponType>());
    (*this).DesiredWeaponKey = gen;
    (*this).NodeName = TEXT("Switch Weapon BB");
}

