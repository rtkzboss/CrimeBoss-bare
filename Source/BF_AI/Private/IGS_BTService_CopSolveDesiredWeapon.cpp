#include "IGS_BTService_CopSolveDesiredWeapon.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "EIGS_MeleeType.h"

UIGS_BTService_CopSolveDesiredWeapon::UIGS_BTService_CopSolveDesiredWeapon() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("MeleeTypeKey_Enum_2147482599"), StaticEnum<EIGS_MeleeType>());
    (*this).MeleeTypeKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddEnumFilter(this, TEXT("DesiredWeaponKey_Enum_2147482598"), StaticEnum<EIGS_SwitchWeaponTask_WeaponType>());
    (*this).DesiredWeaponKey = gen2;
    (*this).NodeName = TEXT("Cop Solve Desired Weapon");
}

