#include "BTTask_LayingOnGround.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_OffenceData.h"

UBTTask_LayingOnGround::UBTTask_LayingOnGround() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482520"), UIGS_OffenceData::StaticClass());
    gen.AllowNoneAsValue(true);
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Laying On Ground");
}

