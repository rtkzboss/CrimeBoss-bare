#include "IGS_BTService_WantsUseMountedGun.h"
#include "IGS_MountedWeapon.h"

UIGS_BTService_WantsUseMountedGun::UIGS_BTService_WantsUseMountedGun() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("MountedGunKey_Object_2147482550"), AIGS_MountedWeapon::StaticClass());
    (*this).MountedGunKey = gen;
    (*this).NodeName = TEXT("Wants Use Mounted Gun");
}

