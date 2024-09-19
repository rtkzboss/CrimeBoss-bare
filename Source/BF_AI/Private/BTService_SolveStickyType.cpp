#include "BTService_SolveStickyType.h"
#include "IGS_GameCharacterFramework.h"
#include "EIGS_StickyType.h"

UBTService_SolveStickyType::UBTService_SolveStickyType() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("StickyTypeKey_Enum_2147482558"), StaticEnum<EIGS_StickyType>());
    (*this).StickyTypeKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("OutStickyCharacterKey_Object_2147482557"), AIGS_GameCharacterFramework::StaticClass());
    (*this).OutStickyCharacterKey = gen2;
    (*this).AllowStickyMove = true;
    (*this).StickyMoveChance = 7.500000000e-01f;
    (*this).InvalidTimeCommon.Min = 1.000000000e+01f;
    (*this).InvalidTimeCommon.Max = 1.500000000e+01f;
    (*this).InvalidTimeOutside.Min = 5.000000000e+00f;
    (*this).InvalidTimeOutside.Max = 8.000000000e+00f;
    (*this).NodeName = TEXT("Solve Sticky Type");
}

