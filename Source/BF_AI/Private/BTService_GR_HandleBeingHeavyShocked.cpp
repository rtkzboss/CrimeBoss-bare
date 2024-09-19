#include "BTService_GR_HandleBeingHeavyShocked.h"
#include "IGS_GeneralReactionData_Base.h"

UBTService_GR_HandleBeingHeavyShocked::UBTService_GR_HandleBeingHeavyShocked() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482576"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddNameFilter(this, TEXT("AnimTypeTagKey"));
    (*this).AnimTypeTagKey = gen2;
    (*this).HitReactionChance = 1.000000000e+02f;
    (*this).HeavyReactionChance = 1.000000000e+02f;
    (*this).NodeName = TEXT("GlobalReaction - Handle Being Heavy Shocked");
}

