#include "IGS_BTTask_FollowPlayer.h"

UIGS_BTTask_FollowPlayer::UIGS_BTTask_FollowPlayer() {
    (*this).SuspectedTargetPos.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetPos, 0)) = 255;
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Follow player");
}

