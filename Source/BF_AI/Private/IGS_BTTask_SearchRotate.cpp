#include "IGS_BTTask_SearchRotate.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_SearchRotate::UIGS_BTTask_SearchRotate() {
    (*this).TracePointOffset.Z = 1.000000000e+02f;
    (*this).ThreatPointLookAtTime = 1.000000000e+00f;
    (*this).ThreatPointLookAtTimeDeviation = 5.000000000e-01f;
    (*this).HighPrioThreatPointLookAtTime = 3.000000000e+00f;
    (*this).HighPrioThreatPointLookAtTimeDeviation = 1.000000000e+00f;
    (*this).ForwardLookAtTime = 1.000000000e+00f;
    (*this).ForwardLookAtTimeDeviation = 5.000000000e-01f;
    (*this).ThreatPointMaxAngle = 4.500000000e+01f;
    (*this).HighPrioThreatPointMaxAngle = 8.500000000e+01f;
    (*this).HighPrioThreatPointRotateAngle = 3.000000000e+01f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482487"), AActor::StaticClass());
    gen.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Search Rotate");
}

