#include "BTService_StickyStillValid.h"
#include "IGS_GameCharacterFramework.h"

UBTService_StickyStillValid::UBTService_StickyStillValid() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("StickToChar_Object_2147482556"), AIGS_GameCharacterFramework::StaticClass());
    (*this).StickToChar = gen;
    (*this).InvalidTimeCommon.Min = 1.500000000e+01f;
    (*this).InvalidTimeCommon.Max = 2.000000000e+01f;
    (*this).InvalidTimeOutside.Min = 1.500000000e+01f;
    (*this).InvalidTimeOutside.Max = 2.000000000e+01f;
    (*this).NodeName = TEXT("Sticky Still Valid");
}

