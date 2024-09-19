#include "BTTask_Ziptie.h"
#include "IGS_GameCharacterFramework.h"

UBTTask_Ziptie::UBTTask_Ziptie() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CivToZiptieKey_Object_2147482467"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CivToZiptieKey = gen;
    (*this).NodeName = TEXT("Ziptie");
}

