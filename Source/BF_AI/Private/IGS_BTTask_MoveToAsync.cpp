#include "IGS_BTTask_MoveToAsync.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_MoveToAsync::UIGS_BTTask_MoveToAsync() {
    (*this).bUseHierarchicalPathfinding = true;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482531"), AActor::StaticClass());
    gen.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
}

