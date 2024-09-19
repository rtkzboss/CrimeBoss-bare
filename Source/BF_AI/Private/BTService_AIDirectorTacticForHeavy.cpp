#include "BTService_AIDirectorTacticForHeavy.h"
#include "EIGS_StormTacticType.h"

UBTService_AIDirectorTacticForHeavy::UBTService_AIDirectorTacticForHeavy() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("WaveManagerTacticKey_Enum_2147482605"), StaticEnum<EIGS_StormTacticType>());
    (*this).WaveManagerTacticKey = gen;
    (*this).NodeName = TEXT("AIDirector Tactic For Heavy");
}

