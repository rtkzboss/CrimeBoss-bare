#include "META_HeisterDataByTier.h"

FMETA_HeisterDataByTier::FMETA_HeisterDataByTier() {
    (*this).QualityData = TMap<EMETA_ItemQuality, FMETA_HeisterEconomyData>{};
}
