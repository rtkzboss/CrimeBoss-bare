#include "META_AllowedHeistersInBM_Config.h"

FMETA_AllowedHeistersInBM_Config::FMETA_AllowedHeistersInBM_Config() {
    (*this).HeisterQualityPercent = TMap<EMETA_ItemQuality, int32>{};
    (*this).Amount = 0;
}
