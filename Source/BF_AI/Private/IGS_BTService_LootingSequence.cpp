#include "IGS_BTService_LootingSequence.h"

UIGS_BTService_LootingSequence::UIGS_BTService_LootingSequence() {
    (*this).BestLootingCollection.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Looting Sequence");
}

