#include "IGS_BTTask_ComplexRotateToFaceBBEntry.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_ComplexRotateToFaceBBEntry::UIGS_BTTask_ComplexRotateToFaceBBEntry() {
    (*this).PredictionTimePerMeter = 1.500000060e-01f;
    (*this).Precision = 1.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482539"), AActor::StaticClass());
    gen.AddVectorFilter(this, TEXT("BlackboardKey"));
    gen.AddRotatorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Complex Rotate to face BB entry");
}

