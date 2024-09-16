#include "IGS_BTTask_BotPlayPatrolPointAnim.h"

UIGS_BTTask_BotPlayPatrolPointAnim::UIGS_BTTask_BotPlayPatrolPointAnim() {
    (*this).PatrolPointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).PatrolPointKey, 0)) = 255;
    (*this).NodeName = TEXT("Bot Play Patrol Point Anim");
}

