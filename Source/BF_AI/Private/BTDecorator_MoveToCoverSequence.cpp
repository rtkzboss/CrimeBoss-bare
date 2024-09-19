#include "BTDecorator_MoveToCoverSequence.h"
#include "CoverPoint.h"

UBTDecorator_MoveToCoverSequence::UBTDecorator_MoveToCoverSequence() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("ReactToThreathKey"));
    gen.AllowNoneAsValue(true);
    (*this).ReactToThreathKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("UpdateCoverKey"));
    (*this).UpdateCoverKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddObjectFilter(this, TEXT("BestCoverKey_Object_2147482620"), UCoverPoint::StaticClass());
    (*this).BestCoverKey = gen3;
    FBlackboardKeySelector gen4;
    gen4.AddObjectFilter(this, TEXT("CoverKey_Object_2147482621"), UCoverPoint::StaticClass());
    (*this).CoverKey = gen4;
    FBlackboardKeySelector gen5;
    gen5.AddVectorFilter(this, TEXT("MoveToPositionKey"));
    (*this).MoveToPositionKey = gen5;
    FBlackboardKeySelector gen6;
    gen6.AddBoolFilter(this, TEXT("IsDodgingKey"));
    (*this).IsDodgingKey = gen6;
    (*this).m_RefreshTimeStartMin = 1.000000000e+00f;
    (*this).m_RefreshTimeStartMax = 1.500000000e+00f;
    (*this).m_RefreshTimeMin = 3.000000119e-01f;
    (*this).m_RefreshTimeMax = 5.000000000e-01f;
    (*this).m_CancelOnThreathReaction = true;
    (*this).m_ReactionDefaultTime = 5.000000000e-01f;
    (*this).NodeName = TEXT("Move To Cover Sequence");
}

