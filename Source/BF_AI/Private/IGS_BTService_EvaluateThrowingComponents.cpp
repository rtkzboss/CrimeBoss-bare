#include "IGS_BTService_EvaluateThrowingComponents.h"

UIGS_BTService_EvaluateThrowingComponents::UIGS_BTService_EvaluateThrowingComponents() {
    (*this).BestLootCollection.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCollection, 0)) = 255;
    (*this).BestLootCarryable.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCarryable, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Throwing Components");
}

