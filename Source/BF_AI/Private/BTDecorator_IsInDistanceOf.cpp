#include "BTDecorator_IsInDistanceOf.h"
#include "GameFramework/Actor.h"

UBTDecorator_IsInDistanceOf::UBTDecorator_IsInDistanceOf() {
    (*this).bIsBlackBoardDistance = true;
    FBlackboardKeySelector gen;
    gen.AddFloatFilter(this, TEXT("DistanceBlackboardKey"));
    (*this).DistanceBlackboardKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("TargetBlackboardKey_Object_2147482627"), AActor::StaticClass());
    gen2.AddVectorFilter(this, TEXT("TargetBlackboardKey"));
    (*this).TargetBlackboardKey = gen2;
    (*this).NodeName = TEXT("Is In Distance Of");
}

