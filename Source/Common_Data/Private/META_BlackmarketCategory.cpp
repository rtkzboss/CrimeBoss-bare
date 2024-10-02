#include "META_BlackmarketCategory.h"

FMETA_BlackmarketCategory::FMETA_BlackmarketCategory() {
    (*this).FilterType = EMETA_BlackmarketItemFilterType::Any;
    (*this).ItemGroups = TSet<FString>{};
    (*this).ItemTags = FGameplayTagContainer();
    (*this).WeaponClasses = FGameplayTagContainer();
    (*this).EntitlementTags = FGameplayTagContainer();
    (*this).bUseCustomImportance = false;
    (*this).Importance = 0;
    (*this).MinimumCount = 0;
    (*this).bHasMaximumRange = false;
    (*this).MaximumCount = 3;
    (*this).ChanceToHappen = 1.000000000e+02f;
    (*this).QualityDistributionOverride = TSet<FMETA_QualityDistribution>{};
}
