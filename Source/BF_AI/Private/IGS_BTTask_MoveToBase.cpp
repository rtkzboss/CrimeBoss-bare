#include "IGS_BTTask_MoveToBase.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_MoveToBase::UIGS_BTTask_MoveToBase() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("LookPosKey"));
    gen.AllowNoneAsValue(true);
    (*this).LookPosKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen2.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen2;
    (*this).m_MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    FBlackboardKeySelector gen3;
    gen3.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482530"), AActor::StaticClass());
    gen3.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen3;
}

