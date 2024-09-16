#include "IGS_BTTask_MoveToBestPosInCombatRange.h"

UIGS_BTTask_MoveToBestPosInCombatRange::UIGS_BTTask_MoveToBestPosInCombatRange() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    (*this).SuspectedTargetPos.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetPos, 0)) = 255;
    (*this).LookPosKey.AllowedTypes = {nullptr, nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move to Best Pos in Combat Range");
}

