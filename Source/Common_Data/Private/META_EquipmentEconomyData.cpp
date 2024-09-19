#include "META_EquipmentEconomyData.h"
#include "Templates/SubclassOf.h"

FMETA_EquipmentEconomyData::FMETA_EquipmentEconomyData() {
    (*this).EquipmentCost = TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, int32>{};
}
