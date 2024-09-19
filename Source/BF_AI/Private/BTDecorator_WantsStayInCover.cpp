#include "BTDecorator_WantsStayInCover.h"
#include "CoverPoint.h"

UBTDecorator_WantsStayInCover::UBTDecorator_WantsStayInCover() {
    (*this).RefreshTime = 1.000000015e-01f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CoverKey_Object_2147482610"), UCoverPoint::StaticClass());
    (*this).CoverKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("BestCoverKey_Object_2147482609"), UCoverPoint::StaticClass());
    (*this).BestCoverKey = gen2;
    (*this).NodeName = TEXT("Want to stay in cover");
}

