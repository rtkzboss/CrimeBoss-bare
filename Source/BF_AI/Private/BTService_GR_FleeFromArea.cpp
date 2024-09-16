#include "BTService_GR_FleeFromArea.h"

UBTService_GR_FleeFromArea::UBTService_GR_FleeFromArea() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).EvadePosKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).EvadePosKey, 0)) = 255;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee from Area");
}

