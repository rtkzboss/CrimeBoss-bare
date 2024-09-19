#include "IGS_BTService_EvaluateMountedGunUsage.h"
#include "IGS_MountedWeapon.h"

UIGS_BTService_EvaluateMountedGunUsage::UIGS_BTService_EvaluateMountedGunUsage() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestMountedGunKey_Object_2147482589"), AIGS_MountedWeapon::StaticClass());
    (*this).BestMountedGunKey = gen;
    (*this).NodeName = TEXT("Evaluate Mounted Gun Usage");
}

