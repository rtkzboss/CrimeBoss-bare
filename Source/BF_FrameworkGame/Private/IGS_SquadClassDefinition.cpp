#include "IGS_SquadClassDefinition.h"

FIGS_SquadClassDefinition::FIGS_SquadClassDefinition() {
    (*this).Default = FSoftObjectPath();
    (*this).UnitSpecializationOverride = TMap<EIGS_UnitSpecialization, TSoftClassPtr<AIGS_SquadFramework>>{};
}
