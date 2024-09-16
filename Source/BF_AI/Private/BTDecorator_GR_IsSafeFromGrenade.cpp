#include "BTDecorator_GR_IsSafeFromGrenade.h"

UBTDecorator_GR_IsSafeFromGrenade::UBTDecorator_GR_IsSafeFromGrenade() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).ExplosionRangeMultiplier = 1.299999952e+00f;
    (*this).NodeName = TEXT("Is Safe from Grenade");
}

