#include "META_HeisterEconomyData.h"
#include "GameplayTagContainer.h"

FMETA_HeisterEconomyData::FMETA_HeisterEconomyData() {
    (*this).HireValueRange.Min = 0;
    (*this).HireValueRange.Max = 0;
    (*this).UpkeepValueRange.Min = 0;
    (*this).UpkeepValueRange.Max = 0;
    (*this).MissionCutRange.Min = 0;
    (*this).MissionCutRange.Max = 0;
    (*this).WeaponQuality.Quality = 0;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WeaponGenerationRestriction.WaponFilter, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WeaponGenerationRestriction.WaponFilter, 0)) = {};
    (*this).EquipmentQuality.Quality = 0;
    (*this).EquipmentChance = 0;
}
