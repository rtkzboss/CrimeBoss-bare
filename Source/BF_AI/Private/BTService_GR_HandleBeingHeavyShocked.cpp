#include "BTService_GR_HandleBeingHeavyShocked.h"

UBTService_GR_HandleBeingHeavyShocked::UBTService_GR_HandleBeingHeavyShocked() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).AnimTypeTagKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).AnimTypeTagKey, 0)) = 255;
    (*this).HitReactionChance = 1.000000000e+02f;
    (*this).HeavyReactionChance = 1.000000000e+02f;
    (*this).NodeName = TEXT("GlobalReaction - Handle Being Heavy Shocked");
}

