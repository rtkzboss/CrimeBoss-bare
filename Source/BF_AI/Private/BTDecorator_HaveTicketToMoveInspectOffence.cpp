#include "BTDecorator_HaveTicketToMoveInspectOffence.h"
#include "IGS_OffenceData.h"

UBTDecorator_HaveTicketToMoveInspectOffence::UBTDecorator_HaveTicketToMoveInspectOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482629"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Have Ticket To Move Inspect");
}

