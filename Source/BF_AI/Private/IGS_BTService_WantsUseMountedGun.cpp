#include "IGS_BTService_WantsUseMountedGun.h"

UIGS_BTService_WantsUseMountedGun::UIGS_BTService_WantsUseMountedGun() {
    (*this).MountedGunKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Wants Use Mounted Gun");
}

