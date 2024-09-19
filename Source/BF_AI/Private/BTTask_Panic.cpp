#include "BTTask_Panic.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_OffenceData.h"

UBTTask_Panic::UBTTask_Panic() {
    (*this).Duration.Min = 5.000000000e+00f;
    (*this).Duration.Max = 8.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482498"), UIGS_OffenceData::StaticClass());
    gen.AllowNoneAsValue(true);
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Panicking");
}

