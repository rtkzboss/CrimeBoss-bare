#include "META_UsableEquipment.h"

FMETA_UsableEquipment::FMETA_UsableEquipment() {
    (*this).Data = TMap<EMETA_ItemQuality, FGameplayTag>{};
}
