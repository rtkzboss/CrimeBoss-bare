#include "BTService_GR_EvadeGrenade.h"

UBTService_GR_EvadeGrenade::UBTService_GR_EvadeGrenade() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).BestEvadePosKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestEvadePosKey, 0)) = 255;
    (*this).NodeName = TEXT("GlobalReaction - Evade Grenade");
}

