#include "META_AllowedEquipmentInfo.h"
#include "Templates/SubclassOf.h"

FMETA_AllowedEquipmentInfo::FMETA_AllowedEquipmentInfo() {
    (*this).MaxNumberOfEquipment = 1;
    (*this).EquipmentClassChance = TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, int32>{};
    (*this).EquipmentQualityChance = TMap<EMETA_ItemQuality, int32>{};
}
