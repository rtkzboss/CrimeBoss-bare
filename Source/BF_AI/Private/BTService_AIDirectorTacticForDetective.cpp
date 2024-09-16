#include "BTService_AIDirectorTacticForDetective.h"

UBTService_AIDirectorTacticForDetective::UBTService_AIDirectorTacticForDetective() {
    (*this).WaveManagerTacticKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("AIDirector Tactic For Detective");
}

