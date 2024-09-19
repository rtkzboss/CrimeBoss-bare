#include "IGS_BTTask_MoveToMelee.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_MoveToMelee::UIGS_BTTask_MoveToMelee() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BattleTarget_Object_2147482506"), AActor::StaticClass());
    (*this).BattleTarget = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("LookPosKey"));
    gen2.AllowNoneAsValue(true);
    (*this).LookPosKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen3.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen3;
    FBlackboardKeySelector gen4;
    gen4.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482507"), AActor::StaticClass());
    gen4.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen4;
    (*this).NodeName = TEXT("Move To Melee");
}

