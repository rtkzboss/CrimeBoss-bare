#include "BTService_ReactToThreat.h"
#include "CoverPoint.h"

UBTService_ReactToThreat::UBTService_ReactToThreat() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestCoverKey_Object_2147482566"), UCoverPoint::StaticClass());
    (*this).BestCoverKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("NeedReactToThreathKey"));
    (*this).NeedReactToThreathKey = gen2;
    (*this).NodeName = TEXT("React to threath");
}

