#include "BTTask_MoveToOffence.h"
#include "GameFramework/Actor.h"
#include "IGS_OffenceData.h"

UBTTask_MoveToOffence::UBTTask_MoveToOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482504"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("LookPosKey"));
    gen2.AllowNoneAsValue(true);
    (*this).LookPosKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen3.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen3;
    FBlackboardKeySelector gen4;
    gen4.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482505"), AActor::StaticClass());
    gen4.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen4;
    (*this).NodeName = TEXT("Move To Offence");
}

