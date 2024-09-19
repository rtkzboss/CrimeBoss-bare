#include "IGS_SpecialLoot.h"

FIGS_SpecialLoot::FIGS_SpecialLoot() {
    (*this).Loot = TArray<FIGS_SpecificSpecialLoot>{};
    (*this).Money = 0;
    (*this).bIsFilled = false;
}
