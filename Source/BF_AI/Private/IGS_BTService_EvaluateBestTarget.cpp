#include "IGS_BTService_EvaluateBestTarget.h"
#include "GameFramework/Actor.h"

UIGS_BTService_EvaluateBestTarget::UIGS_BTService_EvaluateBestTarget() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestTarget_Object_2147482594"), AActor::StaticClass());
    (*this).BestTarget = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("BestTarget"));
    (*this).SuspectedTargetLocation = gen2;
    (*this).TracePlayers = true;
    (*this).NodeName = TEXT("Evaluate Best Target");
}

