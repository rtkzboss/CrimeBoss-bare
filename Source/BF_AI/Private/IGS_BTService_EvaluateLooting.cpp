#include "IGS_BTService_EvaluateLooting.h"

UIGS_BTService_EvaluateLooting::UIGS_BTService_EvaluateLooting() {
    (*this).BestLootingCollection.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).BestLootCarryable.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCarryable, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Looting");
}

