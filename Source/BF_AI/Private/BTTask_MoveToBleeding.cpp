#include "BTTask_MoveToBleeding.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UBTTask_MoveToBleeding::UBTTask_MoveToBleeding() {
    (*this).RefreshTimeMin = 4.000000000e+00f;
    (*this).RefreshTimeMax = 6.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("LookPosKey"));
    gen.AllowNoneAsValue(true);
    (*this).LookPosKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen2.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482514"), AActor::StaticClass());
    gen3.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen3;
    (*this).NodeName = TEXT("Move To Bleeding");
}

