#include "BTService_ReactToThreat.h"

UBTService_ReactToThreat::UBTService_ReactToThreat() {
    (*this).BestCoverKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NeedReactToThreathKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).NeedReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("React to threath");
}

