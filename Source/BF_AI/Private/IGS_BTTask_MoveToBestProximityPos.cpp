#include "IGS_BTTask_MoveToBestProximityPos.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_MoveToBestProximityPos::UIGS_BTTask_MoveToBestProximityPos() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("LookPosKey"));
    gen.AllowNoneAsValue(true);
    (*this).LookPosKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen2.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482515"), AActor::StaticClass());
    gen3.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen3;
    (*this).NodeName = TEXT("Move Best Proximity Pos");
}

