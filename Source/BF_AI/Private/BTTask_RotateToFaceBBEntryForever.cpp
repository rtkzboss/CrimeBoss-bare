#include "BTTask_RotateToFaceBBEntryForever.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UBTTask_RotateToFaceBBEntryForever::UBTTask_RotateToFaceBBEntryForever() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482489"), AActor::StaticClass());
    gen.AddVectorFilter(this, TEXT("BlackboardKey"));
    gen.AddRotatorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Rotate to face BB entry forever");
}

