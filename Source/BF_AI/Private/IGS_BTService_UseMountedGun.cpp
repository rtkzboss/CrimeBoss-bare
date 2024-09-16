#include "IGS_BTService_UseMountedGun.h"

UIGS_BTService_UseMountedGun::UIGS_BTService_UseMountedGun() {
    (*this).MountedGunKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Use Mounted Gun");
}

