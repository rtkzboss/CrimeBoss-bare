#include "IGS_BTTask_OpenLootHolder.h"

UIGS_BTTask_OpenLootHolder::UIGS_BTTask_OpenLootHolder() {
    (*this).DelayAfterInteracting = 1.000000000e+00f;
    (*this).BestLootingCollection.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Open Loot Holder");
}

