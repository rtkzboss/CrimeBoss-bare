#include "BTTask_WaitForOnGround.h"
#include "IGS_GameCharacterFramework.h"

UBTTask_WaitForOnGround::UBTTask_WaitForOnGround() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CivlianToZipKey_Object_2147482468"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CivlianToZipKey = gen;
    (*this).NodeName = TEXT("Wait For On Ground");
}

