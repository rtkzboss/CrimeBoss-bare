#include "IGS_BTService_EvaluateBestTarget.h"

UIGS_BTService_EvaluateBestTarget::UIGS_BTService_EvaluateBestTarget() {
    (*this).BestTarget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    (*this).SuspectedTargetLocation.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetLocation, 0)) = 255;
    (*this).TracePlayers = true;
    (*this).NodeName = TEXT("Evaluate Best Target");
}

