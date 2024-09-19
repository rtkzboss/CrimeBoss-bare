#include "BTService_SolveCivilianToZip.h"
#include "IGS_GameCharacterFramework.h"

UBTService_SolveCivilianToZip::UBTService_SolveCivilianToZip() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CivlianToZipKey_Object_2147482561"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CivlianToZipKey = gen;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}

