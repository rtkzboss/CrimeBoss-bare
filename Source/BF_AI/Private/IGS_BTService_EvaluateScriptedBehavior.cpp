#include "IGS_BTService_EvaluateScriptedBehavior.h"
#include "IGS_LootBagPickup.h"

UIGS_BTService_EvaluateScriptedBehavior::UIGS_BTService_EvaluateScriptedBehavior() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("PickupBagKey_Object_2147482587"), AIGS_LootBagPickup::StaticClass());
    (*this).PickupBagKey = gen;
    (*this).NodeName = TEXT("Evaluate Scripted Behavior");
}

