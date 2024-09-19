#include "IGS_BTTask_BotPlayPatrolPointAnim.h"
#include "IGS_PatrolPoint.h"

UIGS_BTTask_BotPlayPatrolPointAnim::UIGS_BTTask_BotPlayPatrolPointAnim() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("PatrolPointKey_Object_2147482542"), AIGS_PatrolPoint::StaticClass());
    (*this).PatrolPointKey = gen;
    (*this).NodeName = TEXT("Bot Play Patrol Point Anim");
}

