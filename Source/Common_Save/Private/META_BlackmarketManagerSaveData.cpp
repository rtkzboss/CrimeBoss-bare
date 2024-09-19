#include "META_BlackmarketManagerSaveData.h"
#include "EMETA_TradeVendor.h"
#include "META_EquipmentQualityChance.h"
#include "META_WeaponClassChance.h"
#include "META_WeaponQualityChance.h"
#include "Templates/SubclassOf.h"

FMETA_BlackmarketManagerSaveData::FMETA_BlackmarketManagerSaveData() {
    (*this).GenericRecruitsPool = TArray<FMETA_GenericCharacterSave>{};
    (*this).GenericCheapRecruitsPool = TArray<FMETA_GenericCharacterSave>{};
    (*this).UniqueRecruitsPool = TArray<FMETA_HeisterSaveData>{};
    (*this).WeaponsBlackmarket = TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>{};
    (*this).EquipmentBlackmarket = TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData>{};
    (*this).UnseenUnlockedCharacterTagIDs = TArray<FGameplayTag>{};
    (*this).UnseenUnlockedWeaponTagIDs = TArray<FGameplayTag>{};
    (*this).UnseenUnlockedEquipmentTagIDs = TArray<FGameplayTag>{};
    (*this).GenericPrevID = 0;
    (*this).DayWhenHeistersMarketBecameAvailable = 0;
    (*this).DayWhenWeaponsMarketBecameAvailable = 0;
    (*this).PlotlineAssetsPool = TArray<FGameplayTag>{};
    (*this).TemporaryLockedPlotlineAssetsTags = FGameplayTagContainer();
    (*this).ActiveLootEvent.Vendor = EMETA_TradeVendor::UNDEFINED;
    (*this).ActiveLootEvent.LootTag = FGameplayTag();
    (*this).ActiveLootEvent.MinLootValue = 0;
    (*this).ActiveLootEvent.MissionID = nullptr;
    (*this).ReadyLootEvents = TMap<FMETA_VendorLootKey, FMETA_BMEventLootData>{};
    (*this).BaseDayForLootEvents = 0;
    (*this).WeaponEvent.Cooldown = 0;
    (*this).WeaponEvent.MinAvailableCash = 0;
    (*this).WeaponEvent.NumberOfWeaponsPerEvent = 1;
    (*this).WeaponEvent.ExpirationTime = 0;
    (*this).WeaponEvent.WeaponClassesChances = TArray<FMETA_WeaponClassChance>{};
    (*this).WeaponEvent.WeaponQualitiesChances = TArray<FMETA_WeaponQualityChance>{};
    (*this).WeaponsEventPool = TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>{};
    (*this).BaseDayForWeaponEvent = 0;
    (*this).EquipmentEvent.Cooldown = 0;
    (*this).EquipmentEvent.MinAvailableCash = 0;
    (*this).EquipmentEvent.NumberOfEquipmentPerEvent = 1;
    (*this).EquipmentEvent.ExpirationTime = 0;
    (*this).EquipmentEvent.EquipmentQualitiesChances = TArray<FMETA_EquipmentQualityChance>{};
    (*this).EquipmentEventPool = TArray<FMETA_EquipmentSaveData>{};
    (*this).BaseDayForEquipmentEvent = 0;
    (*this).WeaponsPoolRefreshesCounter = 0;
    (*this).WeaponsPoolRefreshesPrice = 0;
    (*this).HireArmyEventData.SoldierCostMultiplierForAttack = 0.000000000e+00f;
    (*this).HireArmyEventData.SoldierCostMultiplierForAttackNeutral = 0.000000000e+00f;
    (*this).HireArmyEventData.SoldierCostMultiplierForDefense = 0.000000000e+00f;
    (*this).HireArmyEventData.SoldierUpkeepCost = 0;
    (*this).HireArmyEventData.SoldierHireCost = 0;
    (*this).HireArmyEventData.SoldierHireCostMultiplierInPercent = 0.000000000e+00f;
    (*this).HireArmyEventData.HireArmyEventConfig.SoldierHireAmountPerHireEvent.Min = 0;
    (*this).HireArmyEventData.HireArmyEventConfig.SoldierHireAmountPerHireEvent.Max = 0;
    (*this).HireArmyEventData.HireArmyEventConfig.ShouldBeClampedByArmyCapacity = false;
    (*this).HireArmyEventData.HireArmyEventConfig.ClampedMinimumArmy = 0;
    (*this).HireArmyEventData.HireEventDelay.Min = 0;
    (*this).HireArmyEventData.HireEventDelay.Max = 0;
    (*this).HireArmyEventData.HireEventDurationTime = 0;
    (*this).AmountOfGeneratedSoldiers = 0;
    (*this).BaseDayForHireArmyEvent = 0;
    (*this).AmountOfBoughtCheapHeisters = 0;
    (*this).HeistersPoolRefreshesCounter = 0;
    (*this).HeistersPoolRefreshPrice = 0;
}
