#include "BTService_AIDirectorTacticForDetective.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_StormTacticType.h"

UBTService_AIDirectorTacticForDetective::UBTService_AIDirectorTacticForDetective() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("WaveManagerTacticKey_Enum_2147482606"), StaticEnum<EIGS_StormTacticType>());
    (*this).WaveManagerTacticKey = gen;
    (*this).NodeName = TEXT("AIDirector Tactic For Detective");
}

