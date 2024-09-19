#include "BTTask_Revive.h"
#include "IGS_GameCharacterFramework.h"
#include "GameFramework/Actor.h"

UBTTask_Revive::UBTTask_Revive() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharToReviveKey_Object_2147482491"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharToReviveKey = gen;
    (*this).DistanceToMove = 1.500000000e+02f;
    (*this).DistanceToStop = 5.000000000e+01f;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("LookPosKey"));
    gen2.AllowNoneAsValue(true);
    (*this).LookPosKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen3.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen3;
    (*this).bDontUsePathLengthLimiter = true;
    FBlackboardKeySelector gen4;
    gen4.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482492"), AActor::StaticClass());
    gen4.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen4;
    (*this).NodeName = TEXT("Revive");
}

