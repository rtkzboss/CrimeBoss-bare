#include "BTDecorator_ReactToThreat.h"

UBTDecorator_ReactToThreat::UBTDecorator_ReactToThreat() {
    (*this).ReactToThreathKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("React to threath");
}

