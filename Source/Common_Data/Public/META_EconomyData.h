#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_BossEliminationReward.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TileReward.h"
#include "EMETA_TileWealth.h"
#include "EMETA_TurfActionAfterSuccess.h"
#include "META_BMEventEquipmentData.h"
#include "META_BMEventWeaponData.h"
#include "META_EconomyGraphVariableModeData.h"
#include "META_FloatInterval.h"
#include "META_HeisterEliminationReward.h"
#include "META_Interval.h"
#include "META_WeaponEliminationReward.h"
#include "META_WeaponTurfReward.h"
#include "EIGS_ModType.h"
#include "IGS_CharacterClasses.h"
#include "IGS_EconomyData_Base.h"
#include "META_AllowedWeaponsInfo.h"
#include "META_ArmyTierConfiguration.h"
#include "META_BossCharacterConfiguration.h"
#include "META_BossEliminationRewardsDistribution.h"
#include "META_CategoryEconomyVariable.h"
#include "META_CharacterInfo.h"
#include "META_GenericCharacterConfiguration.h"
#include "META_LevelUpHeisterData.h"
#include "META_Loan.h"
#include "META_Loans.h"
#include "META_MissionAdditionalMonetaryValue.h"
#include "META_PerkData.h"
#include "META_TradeSettings.h"
#include "META_TurfRewardsDistribution.h"
#include "META_UniqueCharacterConfiguration.h"
#include "META_WarehouseWealthData.h"
#include "Templates/SubclassOf.h"
#include "META_EconomyData.generated.h"

class UIGS_GameplayEffect_PerkBase;
class UMETA_MissionID;
class UObject;

UCLASS()
class COMMON_DATA_API UMETA_EconomyData : public UIGS_EconomyData_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_TradeSettings> TradeSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag HireArmyEventUnlockTag;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ArmyTier, FMETA_ArmyTierConfiguration> ArmyTiersConfig;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval DefenceLostPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_RespectLvl, float> TileRespectMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChanceForTileIncomeToBeLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrequencyOfIncomeValueRecompute;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TileWealth, FMETA_FloatInterval> TurfIncomeMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TileReward, int32> TurfRewardChances;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TileWealth, FMETA_TurfRewardsDistribution> TurfRewardsDistributionConfig;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval SoldiersPercentage;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval LootMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval CashMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_WeaponTurfReward WeaponReward;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_WeaponTurfReward WeaponRewardForRepeatedCapture;
    
    UPROPERTY(EditDefaultsOnly)
    float RewardValueReductionMultiplierForRepeatedCapture;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, float> DefaultPlanningCostMultiplierForWeakenMissions;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TurfActionAfterSuccess, float> PlanningCostMultiplierPerWeakenAction;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_AIBossStrengthChangeIntensity, float> PlanningCostMultiplierPerWeaknessIntensity;
    
    UPROPERTY(EditDefaultsOnly)
    float PlanningCostMultiplierForLastTurfWeakening;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_Loans> Loans;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DaysForRehabilitationAfterBankruptValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BankruptValue;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FMETA_CategoryEconomyVariable> GraphEconomyCategories;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfBuyableAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, FMETA_GenericCharacterConfiguration> GenericCharacterConfigurationPerQuality;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, FMETA_UniqueCharacterConfiguration> UniqueCharacterConfigurationPerQuality;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FMETA_UniqueCharacterConfiguration> UniqueCharacterConfigurationOverride;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_BossCharacterConfiguration BossCharacterConfiguration;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FMETA_LevelUpHeisterData> LevelUpGenericHeisterData;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FMETA_LevelUpHeisterData> LevelUpUniqueHeisterData;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FMETA_LevelUpHeisterData> LevelUpBossData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForUpgrade;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag WeaponEventUnlockTag;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_BMEventWeaponData> BM_WeaponInfoPerBossRespect;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_BMEventEquipmentData> BM_EquipmentInfoPerBossRespect;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_ItemQuality, float> WeaponSkinChancePerQuality;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> ForbiddenWeaponSkins;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 BM_LootEventCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BM_LootProposalsAmount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BM_LootEventSelectionExpiration;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval BM_LootEventMonetaryValueMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WarehouseAttackCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> WarehouseWealthPerRespect;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_Interval> PercentageBeStolenFromStash;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StartingChance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DailyChanceIncrease;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinAmountOfEachLootCanBeStolen;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_BossEliminationReward, int32> EliminationRewardChances;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_BossEliminationRewardsDistribution EliminationRewardsDistributionConfig;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval SoldiersPercentageForElimination;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval LootMultiplierForElimination;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval CashMultiplierForElimination;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_WeaponEliminationReward WeaponRewardForElimination;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_HeisterEliminationReward HeisterRewardForElimination;
    
public:
    UMETA_EconomyData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void RandomizePerksByIDAndLevel(const UObject* inWCO, EIGS_CharacterID inID, int32 inHeisterLevel, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, TArray<FMETA_PerkData>& outRandomizedPerks, bool bIsPromotion);
    
    UFUNCTION(BlueprintPure)
    bool IsWeaponQualityAllowedOnRespect(const EMETA_RespectLvl inRespect, const EMETA_ItemQuality inQuality, const bool inAllowLower, const int32 inChanceThreshold);
    
    UFUNCTION(BlueprintPure)
    FMETA_WeaponTurfReward GetWeaponTurfRewardForRepeatedCapture() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_WeaponTurfReward GetWeaponTurfReward() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeaponsPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable)
    float GetWeaponsPoolRefreshMultiplier();
    
    UFUNCTION(BlueprintPure)
    float GetWeaponSkinChancePerQuality(const EMETA_ItemQuality inWeaponQuality) const;
    
    UFUNCTION(BlueprintPure)
    FMETA_WeaponEliminationReward GetWeaponRewardForElimination() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponMarketCooldownInDays() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponMarketAvailableInDays() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetWeaponEventUnlockTag() const;
    
    UFUNCTION(BlueprintPure)
    float GetWeaponCoefficientPriceForHeister() const;
    
    UFUNCTION(BlueprintPure)
    float GetWeakenMissionPlanningCostMultiplier(EMETA_TurfActionAfterSuccess inTurfAction, EMETA_RespectLvl inRespect, EMETA_AIBossStrengthChangeIntensity inIntensity, bool inIsLastTurf) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> GetWarehouseWealthPerRespect() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWarehouseAttackCooldown() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    bool GetUniqueCharacterConfiguration(const UObject* inWCO, FGameplayTag inCharacter, FMETA_UniqueCharacterConfiguration& outConfig) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfRewardsDistribution GetTurfRewardsDistributionConfig(EMETA_TileWealth inWealth);
    
    UFUNCTION(BlueprintCallable)
    TMap<EMETA_TileReward, int32> GetTurfRewardChances();
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetTurfIncomeMultiplier(EMETA_TileWealth inTileWealth) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTradeSettingsByRespectLvl(EMETA_RespectLvl inRespectLvl, FMETA_TradeSettings& outTradeSettings);
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_RespectLvl, float> GetTileRespectMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetStoryMissionRewardMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStartingChance() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetSoldiersPercentageForTurfReward() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetSoldiersPercentageForElimination() const;
    
    UFUNCTION(BlueprintPure)
    float GetRewardValueReductionMultiplierForRepeatedCapture() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    EMETA_ItemQuality GetRandomizedQualityAccordingToPlayerRespect(const UObject* inWCO);
    
    UFUNCTION(BlueprintPure)
    float GetPriceMultiplierForFirstHeistersGeneration() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_RespectLvl, FMETA_Interval> GetPercentageBeStolenFromStash() const;
    
    UFUNCTION(BlueprintPure)
    float GetNumberOfHPSegmentsForAutomaticRecovery() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfBuyableAssets() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNassaraConversionCost(int32 inCountOfStars, EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintPure)
    float GetMultiplierOfExpensesForMissionsWithoutIntel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplierOfExpensesForMissionsWithIntel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplierOfExpensesForBigHeist(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplierForHealing() const;
    
    UFUNCTION(BlueprintPure)
    float GetMissionBonusRewardForBoss() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinAmountOfEachLootCanBeStolen() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetLootMultiplierForTurfReward() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetLootMultiplierForElimination() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpHeisterData GetLevelUpUniqueHeisterData(int32 inCharacterLevel);
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpHeisterData GetLevelUpGenericHeisterData(int32 inCharacterLevel);
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpHeisterData GetLevelUpBossData(int32 inCharacterLevel);
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetHireArmyEventUnlockTag() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeisterUpkeepMultiplierByEquipmentQuality(EMETA_ItemQuality inEquipmentQuality) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeistersPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable)
    float GetHeistersPoolRefreshMultipier();
    
    UFUNCTION(BlueprintPure)
    int32 GetHeistersAmountOverrideInFirstGeneration() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_HeisterEliminationReward GetHeisterRewardForElimination() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHeisterMarketCooldownInDays() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHeisterMarketAvailableInDays() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealCostMultiplierForUniqueCharacter() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealCostMultiplierByHeisterTier(int32 inHeisterLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHealCostByRespectLevel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable)
    void GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, FMETA_EconomyGraphVariableModeData& outData, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<FMETA_CharacterInfo> GetGenericHeistersPoolForBlackmarketWithOneFree(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedWeaponSkins, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants);
    
    UFUNCTION(BlueprintPure)
    bool GetGenericCharacterConfiguration(EMETA_ItemQuality inQuality, FMETA_GenericCharacterConfiguration& outConfig) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFrequencyOfIncomeValueRecompute() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForUpgrade() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForFirstHeristerGeneraion() const;
    
    UFUNCTION(BlueprintPure)
    float GetEquipmentCoefficientPriceForHeister() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDurationOfHealing() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetDefenceLostPenaltyInterval() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDaysForRehabilitationAfterBankruptValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDailyChanceIncrease() const;
    
    UFUNCTION(BlueprintPure)
    float GetCostModifierForInstantHealing() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForTileIncomeToBeLoot() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetCashMultiplierForTurfReward() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetCashMultiplierForElimination() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuyCostModifierByWeaponAttachmens(TArray<EIGS_ModType> inMods) const;
    
    UFUNCTION(BlueprintPure)
    FMETA_BossEliminationRewardsDistribution GetBossEliminationRewardsDistribution() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_BossEliminationReward, int32> GetBossEliminationRewardChances() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_BossCharacterConfiguration GetBossCharacterConfiguration() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FMETA_BMEventWeaponData GetBmEventWeaponInfoByBossRespect(UObject* inWCO, EMETA_RespectLvl inBossRespectLvl, bool& outSuccess);
    
    UFUNCTION(BlueprintPure)
    int32 GetBMEventLootSelectionExpiration() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBMEventLootProposalsAmount() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetBMEventLootMonetaryValueMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBMEventLootCooldown() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FMETA_BMEventEquipmentData GetBmEventEquipmentInfoByBossRespect(UObject* inWCO, EMETA_RespectLvl inBossRespectLvl, bool& outSuccess);
    
    UFUNCTION(BlueprintPure)
    int32 GetBankruptValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_Loan> GetAvailableLoansByRespect(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintPure)
    void GetArmyTierData(EMETA_ArmyTier inTier, FMETA_ArmyTierConfiguration& OutInfo) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfPromotionPerksForUniqueCharacters() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfPromotionEquipmentsForUniqueCharacters() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EIGS_CharacterID> GetAllSuitableGenericCharacterIdsByCharacterQuality(EMETA_ItemQuality inCharacterQuality) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_AllowedWeaponsInfo GetAllowedWeaponsByRespect(const EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintPure)
    TArray<EMETA_ItemQuality> GetAllowedHeistersForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAllowedHeistersAmountForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) const;
    
    UFUNCTION(BlueprintPure)
    FMETA_MissionAdditionalMonetaryValue GetAdditionalWealthOfMission(const TSubclassOf<UMETA_MissionID>& inMission) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FMETA_CharacterInfo GenerateGenericHeisterByPlayerRespectWithHireValue(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedWeaponSkins, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool inIsFree, bool& outSuccess);
    
    UFUNCTION(BlueprintPure)
    void DoesHaveAdditionalWealthConfig(const TSubclassOf<UMETA_MissionID>& inMission, bool& bHasAdditionalWealthConfig) const;
    
    UFUNCTION(BlueprintPure)
    void CalculateArmyUpkeepCost(EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyUpkeepCost) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void CalculateArmyCostForDefense(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void CalculateArmyCostForAttack(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost);
    
};

