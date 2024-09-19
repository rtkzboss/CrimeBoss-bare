#include "IGS_BTService_WantsMoveToMountedGun.h"
#include "IGS_MountedWeapon.h"

UIGS_BTService_WantsMoveToMountedGun::UIGS_BTService_WantsMoveToMountedGun() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestMountedGunKey_Object_2147482551"), AIGS_MountedWeapon::StaticClass());
    (*this).BestMountedGunKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("MountedGunKey_Object_2147482552"), AIGS_MountedWeapon::StaticClass());
    (*this).MountedGunKey = gen2;
    (*this).NodeName = TEXT("Wants Move To Mounted Gun");
}

