#include "IGS_LootBagItemHolder.h"

FIGS_LootBagItemHolder::FIGS_LootBagItemHolder() {
    (*this).Items = TArray<FIGS_LootBagSingleItem>{};
    (*this).ItemType = EIGS_ItemType::Item_UNKNOWN;
}
