#include "BTService_LookAt.h"
#include "GameFramework/Actor.h"

UBTService_LookAt::UBTService_LookAt() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("LookAtBlackBoardKey_Object_2147482570"), AActor::StaticClass());
    gen.AddVectorFilter(this, TEXT("LookAtBlackBoardKey"));
    (*this).LookAtBlackBoardKey = gen;
    (*this).LookAtStartMaxAngle = 6.000000000e+01f;
    (*this).LookAtStopMaxAngle = 9.000000000e+01f;
    (*this).NodeName = TEXT("Look At Service");
}

