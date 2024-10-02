#include "META_BlackmarketDistribution.h"
#include "GameplayTagContainer.h"

FMETA_BlackmarketDistribution::FMETA_BlackmarketDistribution() {
    (*this).TotalItemCount.Min = 6;
    (*this).TotalItemCount.Max = 12;
    (*this).QualityDistribution = TSet<FMETA_QualityDistribution>{};
    (*this).Categories = TArray<FMETA_BlackmarketCategory>{};
    (*this).AdditionalPriorities.NotEquipped = 0;
    (*this).AdditionalPriorities.NotOwned = 0;
    (*this).AdditionalPriorities.WasGeneratedPreviously = 0;
    (*this).AdditionalPriorities.EntitlementItem = 0;
    (*this).AdditionalPriorities.PerItemID = TMap<FGameplayTag, int32>{};
    (*this).AdditionalPriorities.PerWeaponClass = TMap<FGameplayTag, int32>{};
    (*this).WeaponSkinChances = TSet<FMETA_QualityDistribution>{};
}
