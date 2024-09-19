#include "IGS_BTService_FetchOffenceToBlackboard.h"
#include "IGS_OffenceData.h"

UIGS_BTService_FetchOffenceToBlackboard::UIGS_BTService_FetchOffenceToBlackboard() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482584"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Fetch Offence To Blackboard");
}

