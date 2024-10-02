#include "META_BlackmarketRuntimeCategory.h"
#include "GameplayTagContainer.h"
#include "EMETA_BlackmarketItemFilterType.h"
#include "META_QualityDistribution.h"

FMETA_BlackmarketRuntimeCategory::FMETA_BlackmarketRuntimeCategory() {
    (*this).Configuration.FilterType = EMETA_BlackmarketItemFilterType::Any;
    (*this).Configuration.ItemGroups = TSet<FString>{};
    (*this).Configuration.ItemTags = FGameplayTagContainer();
    (*this).Configuration.WeaponClasses = FGameplayTagContainer();
    (*this).Configuration.EntitlementTags = FGameplayTagContainer();
    (*this).Configuration.bUseCustomImportance = false;
    (*this).Configuration.Importance = 0;
    (*this).Configuration.MinimumCount = 0;
    (*this).Configuration.bHasMaximumRange = false;
    (*this).Configuration.MaximumCount = 3;
    (*this).Configuration.ChanceToHappen = 1.000000000e+02f;
    (*this).Configuration.QualityDistributionOverride = TSet<FMETA_QualityDistribution>{};
    (*this).CalculatedPriorities = TMap<FGameplayTag, int32>{};
    (*this).SelectedItems = TArray<FGameplayTag>{};
}
