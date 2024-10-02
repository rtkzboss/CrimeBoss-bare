#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "META_MissionID.h"
#include "CommonHeisterLoadout.h"
#include "EIGS_ModType.h"
#include "IGS_CharacterClasses.h"
#include "IGS_CharacterTableRow.h"
#include "IGS_EquipmentInventoryObject.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "META_AllowedEquipmentInfo.h"
#include "META_AllowedHeistersInBM_Config.h"
#include "META_AllowedWeaponsInfo.h"
#include "META_CharacterInfo.h"
#include "META_EquipmentArrayCached.h"
#include "META_EquipmentEconomyData.h"
#include "META_EquipmentPriceIntervalsPerQuality.h"
#include "META_EquipmentScopeKey.h"
#include "META_HeisterDataByTier.h"
#include "META_HeisterEconomyData.h"
#include "META_HeisterPerksDataByLevel.h"
#include "META_HeisterRandomizedData.h"
#include "META_LootBagConfiguration.h"
#include "META_MissionAdditionalMonetaryValue.h"
#include "META_MissionMonetaryValue.h"
#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"
#include "META_PerkData.h"
#include "META_RandomizedWeaponData.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.h"
#include "META_UniqueCharacterCostsData.h"
#include "META_WeaponEconomyData.h"
#include "META_WeaponInventoryObject.h"
#include "META_WeaponScopeKey.h"
#include "META_WeaponsArrayCached.h"
#include "Templates/SubclassOf.h"
#include "IGS_EconomyData_Base.generated.h"

class UIGS_MenuCommonData_Base;
class UMETA_Equipment;
class UMETA_Weapon;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_EconomyData_Base : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_EconomyData_Base();

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void UpdateWeaponsCachedData(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void UpdateEquipmentCachedData(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void UpdateCachedData(const UObject* inWCO);

public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool TryToGenerateWeaponTypeForCharacter(const UObject* inWCO, const EIGS_InventorySlot inType, const EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, FMETA_RandomizedWeaponData& outRandomizedWeaponData);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool TryToGenerateRandomEquipmentForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, FGameplayTag inEquippedEquipment, const TArray<FGameplayTag>& inUnlockedEquipment, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool TryGetCommonPerkLimitForCharacter(UObject* inWCO, const FGameplayTag inCharacterTag, const EMETA_ItemQuality inQuality, const int32 inLevel, int32& outLimit);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetCharacterPoolNames(const UObject* inWCO, UPARAM(Ref) TArray<FMETA_CharacterInfo>& inGeneratedPool);

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void RefreshCommonData(const UObject* inWCO);

public:
    UFUNCTION(BlueprintPure)
    bool IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const;

    UFUNCTION(BlueprintPure)
    static bool IsItemUnlocked(TArray<FGameplayTag> inUnlockedPool, FGameplayTag inItemTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<FGameplayTag> GetWeaponTagsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<UMETA_Weapon*> GetWeaponsPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedWeaponSkins, UPARAM(Ref) TArray<FGameplayTag>& inUnseenUnlockedWeapons, UPARAM(Ref) TArray<UMETA_Weapon*>& inOldWeaponsPool, int32 inTargetAmountOfUnseenItemsForPurchase);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inAlreadySelectedWeapons, const TArray<FGameplayTag>& inUnlockedWeapons, bool inIgnoreUnlock);

    UFUNCTION(BlueprintPure)
    int32 GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality, const float inRelativePrice) const;

    UFUNCTION(BlueprintPure)
    void GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const;

    UFUNCTION(BlueprintPure)
    int32 GetUniqueCharacterMissionCut(EIGS_CharacterID inCharacterID) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool GetSuitableWeaponsAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, int32 inHeisterLevel, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, FCommonHeisterLoadout& outLoadout);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool GetSuitableEquipmentAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_ItemQuality inHeisterQuality, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, TSubclassOf<UIGS_EquipmentInventoryObject> inCurrentEquipments, const TArray<FGameplayTag>& inUnlockedEquipment, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    int32 GetStartingPerkCountOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    int32 GetStartingLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void GetRandomizedUniqueCharacterCostsData(const UObject* inWCO, EIGS_CharacterID inCharacterID, EMETA_ItemQuality inCharacterQuality, int32& outBaseUpkeepCost, int32& outBaseHireCost);

    UFUNCTION(BlueprintPure)
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(EMETA_RespectLvl RespectLevel, FGameplayTag inFGameplayTag) const;

    UFUNCTION(BlueprintPure)
    float GetMissionRewardMultiplierForScenarioDifficulty(EIGS_ScenarioDifficulty inDifficulty) const;

    UFUNCTION(BlueprintPure)
    float GetMissionRewardMultiplierForCampaignDifficulty(EIGS_UserDifficulty inDifficulty) const;

    UFUNCTION(BlueprintPure)
    float GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl) const;

    UFUNCTION(BlueprintPure)
    int32 GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl) const;

    UFUNCTION(BlueprintPure)
    int32 GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl) const;

    UFUNCTION(BlueprintCallable)
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> GetMissionAdditionalWealthMissions();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    int32 GetMaxLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<FMETA_CharacterInfo> GetGenericHeistersPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TSet<int32> inUniqueGenericIDs, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedWeaponSkins, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FMETA_HeisterRandomizedData GetGenericHeisterRandomizedData(UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_ItemQuality inHeisterQuality, int32 inHeisterLevel, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, bool bIsPromotion, bool& bOutSuccess);

    UFUNCTION(BlueprintPure)
    void GetGenericHeisterEconomyData(EIGS_CharacterID inGenericCharacterID, EMETA_ItemQuality inCharacterQuality, FMETA_HeisterEconomyData& outEconomyData, bool& bSuccess) const;

    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForGenericHeisters() const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<UMETA_Equipment*> GetEquipmentPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FGameplayTag>& inUnseenUnlockedEquipment, UPARAM(Ref) TArray<UMETA_Equipment*>& inOldEquipmentPool, int32 inTargetAmountOfUnseenItemsForPurchase);

    UFUNCTION(BlueprintPure)
    void GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const;

    UFUNCTION(BlueprintPure)
    int32 GetDefaultProbabilitiesDataForCommonMissions() const;

    UFUNCTION(BlueprintPure)
    FMETA_MissionMonetaryValue GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const;

    UFUNCTION(BlueprintPure)
    float GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const;

    UFUNCTION(BlueprintPure)
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FMETA_CharacterInfo GenerateGenericHeisterByPlayerRespect(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const int32 inUniqueGenericID, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedWeaponSkins, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool& outSuccess);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FMETA_CharacterInfo GenerateGenericHeisterByIdAndTier(UObject* inWCO, EIGS_CharacterID inGenericHeisterID, EMETA_ItemQuality inGenericHeisterTier, const int32 inUniqueGenericID, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedWeaponSkins, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool& outSuccess);

protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CharacterID, FMETA_HeisterDataByTier> SetupHeisterDataPerGenericCharacterAndQuality;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CharacterID, FMETA_HeisterPerksDataByLevel> SetupHeisterPerksPerLevel;

    UPROPERTY(EditDefaultsOnly)
    FMETA_UniqueCharacterCostsData BasicUniqueCharacterCosts;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterCostsData> UniqueCharacterCostsOverride;

    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval MissionsCutForUniqueCharacters;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CharacterID, FMETA_Interval> MissionsCutOverrideForUniqueCharacters;

    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForFirstHeristerGeneraion;

    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForGenericHeisters;

    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval ReduceHirePriceByPercentForEachBadPerk;

    UPROPERTY(EditDefaultsOnly)
    int32 ChanceRegenerateAllPerksIfTheyAreNegative;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, FMETA_WeaponEconomyData> SetupWeaponDataPerWeaponQuality;

    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, float> BuyCostModifierByWeaponClass;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_ModType, int32> BuyCostModifierByWeaponAttachmens;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, FMETA_EquipmentPriceIntervalsPerQuality> SetupEquipmentDataPerEquipmentQuality;

    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, float> BuyCostModifierByEquipmentClass;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_ModType, int32> BuyCostModifierByEquipmentAttachmens;

    UPROPERTY(BlueprintReadWrite)
    TMap<EMETA_ItemQuality, float> HeisterUpkeepMultiplierPerEquipmentQuality;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_MissionMonetaryValue> MissionsCommonWealthConfiguration;

    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> MissionsAdditionalWealthConfiguration;

    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration;

    UPROPERTY(EditDefaultsOnly)
    int32 DefaultMoneyMakingScenariosProbabilities;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_ScenarioDifficulty, float> MissionRewardsMultiplierPerScenarioDifficulty;

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_UserDifficulty, float> MissionRewardsMultiplierPerCampaignDifficulty;

    UPROPERTY(EditDefaultsOnly)
    float StoryMissionRewardMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FailNassaraExpenses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NassaraExpensesFor1stStar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NassaraExpensesFor2stStar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NassaraExpensesFor3stStar;

    UPROPERTY(EditDefaultsOnly)
    float WeaponCoefficientPriceForHeister;

    UPROPERTY(EditDefaultsOnly)
    float EquipmentCoefficientPriceForHeister;

    UPROPERTY(EditDefaultsOnly)
    int32 HeisterMarketAvailableInDays;

    UPROPERTY(EditDefaultsOnly)
    int32 HeisterMarketCooldownInDays;

    UPROPERTY(EditDefaultsOnly)
    float PriceMultiplierForFirstGeneration;

    UPROPERTY(EditDefaultsOnly)
    int32 HeistersAmountOverrideInFirstGeneration;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_AllowedHeistersInBM_Config> AllowedHeistersPerRespectStatus;

    UPROPERTY(EditDefaultsOnly)
    float HeistersPoolRefreshCostMultiplier;

    UPROPERTY(EditDefaultsOnly)
    float HeistersPoolRefreshStartPriceMultiplier;

    UPROPERTY(EditDefaultsOnly)
    int32 WeaponMarketAvailableInDays;

    UPROPERTY(EditDefaultsOnly)
    int32 WeaponMarketCooldownInDays;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_AllowedWeaponsInfo> AllowedWeaponsPerRespectStatus;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_AllowedEquipmentInfo> AllowedEquipmentPerRespectStatus;

    UPROPERTY(EditDefaultsOnly)
    float NumberOfHPSegmentsForAutomaticRecovery;

    UPROPERTY(EditDefaultsOnly)
    float MultiplierForHealing;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> HealCostPerRespectLevel;

    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> HealCostMultiplierPerHeisterLevel;

    UPROPERTY(EditDefaultsOnly)
    float HealCostMultiplierForUniqueCharacter;

    UPROPERTY(EditDefaultsOnly)
    float CostModifierForInstantHealing;

    UPROPERTY(EditDefaultsOnly)
    int32 DurationOfHealing;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_ScenarioDifficulty, float> TotalLootBagsMultiplierPerDificulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, float> TotalLootBagsMultiplierPerNumberOfPlayers;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<int32, FMETA_Interval> RangeBagsPerNumberOfPlayers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FloatInterval RandomBagSpread;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_LootBagConfiguration> LootBagConfigurations;

    UPROPERTY(Transient)
    FMETA_EquipmentEconomyData EquipmentEconomyData;

    UPROPERTY(Transient)
    TMap<FMETA_WeaponScopeKey, FMETA_WeaponsArrayCached> WeaponsCachedData;

    UPROPERTY(Transient)
    TMap<FMETA_EquipmentScopeKey, FMETA_EquipmentArrayCached> EquipmentCachedData;

    UPROPERTY(Transient)
    UIGS_MenuCommonData_Base* CommonData;

};
