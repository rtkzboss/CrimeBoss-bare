#include "IGS_BTTask_EqipMountedGun.h"
#include "IGS_MountedWeapon.h"

UIGS_BTTask_EqipMountedGun::UIGS_BTTask_EqipMountedGun() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestMountedGunKey_Object_2147482536"), AIGS_MountedWeapon::StaticClass());
    (*this).BestMountedGunKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("MountedGunKey_Object_2147482537"), AIGS_MountedWeapon::StaticClass());
    (*this).MountedGunKey = gen2;
    (*this).NodeName = TEXT("Eqip Mounted Gun");
}

