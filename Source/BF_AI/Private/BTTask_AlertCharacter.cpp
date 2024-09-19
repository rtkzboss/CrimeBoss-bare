#include "BTTask_AlertCharacter.h"
#include "IGS_GameCharacterFramework.h"
#include "IGS_OffenceData.h"

UBTTask_AlertCharacter::UBTTask_AlertCharacter() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharacterToAlert_Object_2147482544"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharacterToAlert = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482545"), UIGS_OffenceData::StaticClass());
    gen2.AllowNoneAsValue(true);
    (*this).OffenceDataKey = gen2;
    (*this).NodeName = TEXT("Alert Character");
}

