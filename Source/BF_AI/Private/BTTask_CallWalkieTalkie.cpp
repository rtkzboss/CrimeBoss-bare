#include "BTTask_CallWalkieTalkie.h"
#include "IGS_OffenceData.h"

UBTTask_CallWalkieTalkie::UBTTask_CallWalkieTalkie() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482541"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Call Walkie Talkie");
}

