#include "IGS_BTTask_Loot.h"

UIGS_BTTask_Loot::UIGS_BTTask_Loot() {
    (*this).BestLootingCollection.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Loot");
}

