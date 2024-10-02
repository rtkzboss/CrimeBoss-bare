#include "META_BlackmarketData.h"

UMETA_BlackmarketData::UMETA_BlackmarketData() {
    (*this).BasePriority = 100;
    (*this).WeaponRefreshStartPrice = 1.000000000e+02f;
    (*this).WeaponRefreshMultiplier = 1.000000000e+00f;
}

TArray<FString> UMETA_BlackmarketData::GetItemGroupOptions() const {
    return {};
}

