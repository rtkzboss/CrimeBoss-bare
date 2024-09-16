#include "IGS_BTService_WantsMoveToMountedGun.h"

UIGS_BTService_WantsMoveToMountedGun::UIGS_BTService_WantsMoveToMountedGun() {
    (*this).BestMountedGunKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    (*this).MountedGunKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Wants Move To Mounted Gun");
}

