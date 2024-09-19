#include "BTTask_InterpolateTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UBTTask_InterpolateTo::UBTTask_InterpolateTo() {
    (*this).InterpolationSpeed = 1.000000000e+00f;
    (*this).MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("BlackboardKey"));
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482522"), AActor::StaticClass());
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Interpolate To");
}

