#include "META_UniqueCharacterCostsData.h"

FMETA_UniqueCharacterCostsData::FMETA_UniqueCharacterCostsData() {
    (*this).BaseHireCostRangePerCharacterQuality = TMap<EMETA_ItemQuality, FMETA_Interval>{};
    (*this).HireCostMultiplierPerRespect = TMap<EMETA_RespectLvl, float>{};
    (*this).UpkeepMultiplier.Min = 0.000000000e+00f;
    (*this).UpkeepMultiplier.Max = 0.000000000e+00f;
}
