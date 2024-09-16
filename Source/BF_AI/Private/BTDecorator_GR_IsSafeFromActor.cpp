#include "BTDecorator_GR_IsSafeFromActor.h"

UBTDecorator_GR_IsSafeFromActor::UBTDecorator_GR_IsSafeFromActor() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr, nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).SafeDistance = 5.000000000e+02f;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).SafeDistanceFromBB = true;
    (*this).SafeWhenHidden = true;
    (*this).NodeName = TEXT("Is Safe from Actor");
}

