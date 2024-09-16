#include "IGS_BTService_EvaluateMountedGunUsage.h"

UIGS_BTService_EvaluateMountedGunUsage::UIGS_BTService_EvaluateMountedGunUsage() {
    (*this).BestMountedGunKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Mounted Gun Usage");
}

