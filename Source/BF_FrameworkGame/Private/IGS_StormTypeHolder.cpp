#include "IGS_StormTypeHolder.h"

FIGS_StormTypeHolder::FIGS_StormTypeHolder() {
    (*this).StormHolders = TMap<EIGS_ScenarioDifficulty, FIGS_StormHolder>{};
}
