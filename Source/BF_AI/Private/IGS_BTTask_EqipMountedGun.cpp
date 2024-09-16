#include "IGS_BTTask_EqipMountedGun.h"

UIGS_BTTask_EqipMountedGun::UIGS_BTTask_EqipMountedGun() {
    (*this).BestMountedGunKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    (*this).MountedGunKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Eqip Mounted Gun");
}

