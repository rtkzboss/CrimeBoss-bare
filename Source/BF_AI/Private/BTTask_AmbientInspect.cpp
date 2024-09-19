#include "BTTask_AmbientInspect.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_OffenceData.h"

UBTTask_AmbientInspect::UBTTask_AmbientInspect() {
    (*this).Duration.Min = 3.000000000e+00f;
    (*this).Duration.Max = 7.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482543"), UIGS_OffenceData::StaticClass());
    gen.AllowNoneAsValue(true);
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Ambient Inspect");
}

