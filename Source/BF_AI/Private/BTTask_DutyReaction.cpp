#include "BTTask_DutyReaction.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_OffenceData.h"

UBTTask_DutyReaction::UBTTask_DutyReaction() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482546"), UIGS_OffenceData::StaticClass());
    gen.AllowNoneAsValue(true);
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Duty Reaction");
}

