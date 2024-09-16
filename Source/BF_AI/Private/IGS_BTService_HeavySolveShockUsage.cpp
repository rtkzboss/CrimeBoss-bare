#include "IGS_BTService_HeavySolveShockUsage.h"

UIGS_BTService_HeavySolveShockUsage::UIGS_BTService_HeavySolveShockUsage() {
    (*this).ShouldUseShockKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ShouldUseShockKey, 0)) = 255;
    (*this).NodeName = TEXT("Solve Heavy Shock Usage");
}

