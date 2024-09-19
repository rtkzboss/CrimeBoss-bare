#include "BTDecorator_IsZiptieByOther.h"
#include "IGS_GameCharacterFramework.h"

UBTDecorator_IsZiptieByOther::UBTDecorator_IsZiptieByOther() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CivToZiptieKey_Object_2147482622"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CivToZiptieKey = gen;
    (*this).NodeName = TEXT("Is Ziptie By Other");
}

