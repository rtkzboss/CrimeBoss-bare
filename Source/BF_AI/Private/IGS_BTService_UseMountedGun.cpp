#include "IGS_BTService_UseMountedGun.h"
#include "IGS_MountedWeapon.h"

UIGS_BTService_UseMountedGun::UIGS_BTService_UseMountedGun() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("MountedGunKey_Object_2147482553"), AIGS_MountedWeapon::StaticClass());
    (*this).MountedGunKey = gen;
    (*this).NodeName = TEXT("Use Mounted Gun");
}

