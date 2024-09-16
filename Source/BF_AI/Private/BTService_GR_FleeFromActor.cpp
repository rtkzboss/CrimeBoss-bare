#include "BTService_GR_FleeFromActor.h"

UBTService_GR_FleeFromActor::UBTService_GR_FleeFromActor() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).BestEvadePosKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestEvadePosKey, 0)) = 255;
    (*this).SafeDistanceKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SafeDistanceKey, 0)) = 255;
    (*this).SafeDistance = 5.000000000e+02f;
    (*this).SafeDistanceFromBB = true;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).InnerRangeMultiplier = 1.200000048e+00f;
    (*this).OuterRangeMultiplier = 1.700000048e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee From Actor");
}

