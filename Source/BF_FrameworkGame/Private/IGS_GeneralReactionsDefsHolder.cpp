#include "IGS_GeneralReactionsDefsHolder.h"

FIGS_GeneralReactionsDefsHolder::FIGS_GeneralReactionsDefsHolder() {
    (*this).ReactionOverrides = TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef>{};
}
