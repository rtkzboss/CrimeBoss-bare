#include "BTTask_MoveToCover.h"
#include "CoverPoint.h"
#include "GameFramework/Actor.h"

UBTTask_MoveToCover::UBTTask_MoveToCover() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CoverBlackboardKey_Object_2147482510"), UCoverPoint::StaticClass());
    (*this).CoverBlackboardKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("CoverBlackboardKey"));
    (*this).IsApproachMoveKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddVectorFilter(this, TEXT("LookPosKey"));
    gen3.AllowNoneAsValue(true);
    (*this).LookPosKey = gen3;
    FBlackboardKeySelector gen4;
    gen4.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen4.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen4;
    FBlackboardKeySelector gen5;
    gen5.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482511"), AActor::StaticClass());
    gen5.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen5;
    (*this).NodeName = TEXT("Move To Cover");
}

