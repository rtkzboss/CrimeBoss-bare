#include "IGS_BTTask_FinishGeneralReaction.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_GeneralReactionData_Base.h"

UIGS_BTTask_FinishGeneralReaction::UIGS_BTTask_FinishGeneralReaction() {
    (*this).bSuccess = true;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482533"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("FinishGeneralReaction");
}

