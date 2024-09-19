#include "BTDecorator_ReactToThreat.h"

UBTDecorator_ReactToThreat::UBTDecorator_ReactToThreat() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("ReactToThreathKey"));
    (*this).ReactToThreathKey = gen;
    (*this).NodeName = TEXT("React to threath");
}

