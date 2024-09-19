#include "IGS_GeneralReactionSpecHolder.h"

FIGS_GeneralReactionSpecHolder::FIGS_GeneralReactionSpecHolder() {
    (*this).ReactionOverrides = TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef>{};
    (*this).SpecOverrides = TMap<EIGS_UnitSpecialization, FIGS_GeneralReactionsDefsHolder>{};
}
