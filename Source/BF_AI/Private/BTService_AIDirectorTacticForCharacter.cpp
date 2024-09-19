#include "BTService_AIDirectorTacticForCharacter.h"
#include "EIGS_StormTacticType.h"

UBTService_AIDirectorTacticForCharacter::UBTService_AIDirectorTacticForCharacter() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("WaveManagerTacticKey_Enum_2147482607"), StaticEnum<EIGS_StormTacticType>());
    (*this).WaveManagerTacticKey = gen;
    (*this).NodeName = TEXT("AIDirector Tactic For Character");
}

