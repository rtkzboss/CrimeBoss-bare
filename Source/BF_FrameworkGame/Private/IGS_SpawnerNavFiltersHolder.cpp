#include "IGS_SpawnerNavFiltersHolder.h"

FIGS_SpawnerNavFiltersHolder::FIGS_SpawnerNavFiltersHolder() {
    (*this).DefaultNavFilter = FSoftObjectPath();
    (*this).NoDangerNavFilter = FSoftObjectPath();
}
