#include "META_AssetsStatistic.h"

FMETA_AssetsStatistic::FMETA_AssetsStatistic() {
    (*this).AssetsEarned = TMap<FName, FMETA_AssetsDataForStatistic>{};
    (*this).AssetsBought = TMap<FName, FMETA_AssetsDataForStatistic>{};
    (*this).AssetsLost = TMap<FName, FMETA_AssetsDataForStatistic>{};
    (*this).TotalAssets = TMap<FName, FMETA_AssetsDataForStatistic>{};
}
