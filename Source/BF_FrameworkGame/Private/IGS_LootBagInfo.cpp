#include "IGS_LootBagInfo.h"

FIGS_LootBagInfo::FIGS_LootBagInfo() {
    (*this).Items = TArray<UIGS_InventoryObjectFramework*>{};
    (*this).ItemIDs = TArray<int32>{};
    (*this).CurrentCapacity = 0.000000000e+00f;
    (*this).IsOverfilled = false;
}
