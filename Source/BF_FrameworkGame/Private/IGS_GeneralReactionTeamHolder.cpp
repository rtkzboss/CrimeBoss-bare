#include "IGS_GeneralReactionTeamHolder.h"

FIGS_GeneralReactionTeamHolder::FIGS_GeneralReactionTeamHolder() {
    (*this).Defaults = TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef>{};
    (*this).TeamOverrides = TMap<EIGS_TeamSideEnum, FIGS_GeneralReactionSpecHolder>{};
}
