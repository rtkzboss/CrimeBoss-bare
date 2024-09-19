#include "IGS_BTService_EvaluateBestTargetSquadControlled.h"
#include "GameFramework/Actor.h"

UIGS_BTService_EvaluateBestTargetSquadControlled::UIGS_BTService_EvaluateBestTargetSquadControlled() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestTarget_Object_2147482593"), AActor::StaticClass());
    (*this).BestTarget = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("BestTarget"));
    (*this).SuspectedTargetLocation = gen2;
    (*this).NodeName = TEXT("Evaluate Best Target Suqad Controlled");
}

