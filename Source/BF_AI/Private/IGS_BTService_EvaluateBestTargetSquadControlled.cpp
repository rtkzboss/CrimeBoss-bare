#include "IGS_BTService_EvaluateBestTargetSquadControlled.h"

UIGS_BTService_EvaluateBestTargetSquadControlled::UIGS_BTService_EvaluateBestTargetSquadControlled() {
    (*this).BestTarget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    (*this).SuspectedTargetLocation.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetLocation, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Best Target Suqad Controlled");
}

