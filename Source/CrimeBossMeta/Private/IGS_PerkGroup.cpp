#include "IGS_PerkGroup.h"

FIGS_PerkGroup::FIGS_PerkGroup() {
    (*this).Perks = TMap<int32, UMETA_Perk*>{};
}
