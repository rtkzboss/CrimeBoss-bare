#include "BTDecorator_CanCover.h"
#include "CoverPoint.h"

UBTDecorator_CanCover::UBTDecorator_CanCover() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestCoverKey_Object_2147482636"), UCoverPoint::StaticClass());
    (*this).BestCoverKey = gen;
    (*this).NodeName = TEXT("Can cover");
}

