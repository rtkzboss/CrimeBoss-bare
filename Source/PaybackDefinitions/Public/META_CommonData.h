#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_CharacterID.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_AmbushType.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_PoliceInvestigationChangeForGraph.h"
#include "EMETA_RandEventCategory.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TileSize.h"
#include "EMETA_TradeRelationship.h"
#include "EMETA_TradeVendor.h"
#include "IGS_MenuCommonData_Base.h"
#include "META_AmbushConfig.h"
#include "META_CampaignUserDifficultyConfiguration.h"
#include "META_DetectiveChancesToAppear.h"
#include "META_DetectivesInvestigationConfig.h"
#include "META_FloatInterval.h"
#include "META_GangTradeInfo.h"
#include "META_HealLevelData.h"
#include "META_HeatHeistsData.h"
#include "META_HeatTurfWarData.h"
#include "META_IntelDataSetup.h"
#include "META_Interval.h"
#include "META_PawnShopTrendData.h"
#include "META_PerkInfo.h"
#include "META_RandEventCategoryConfig.h"
#include "META_StatisticsRootTags.h"
#include "META_TradeRelationshipInfo.h"
#include "META_CommonData.generated.h"

UCLASS()
class PAYBACKDEFINITIONS_API UMETA_CommonData : public UIGS_MenuCommonData_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> RelationOfTurfsToRespect;
    
    UPROPERTY(EditDefaultsOnly)
    EIGS_CharacterID PlayersCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AmountOfMissionsCanBeCompletedByBossPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* Equipment;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_UserDifficulty, FMETA_CampaignUserDifficultyConfiguration> CampaignDifficulty;
    
    UPROPERTY(EditDefaultsOnly)
    float ChanceToPickSecondaryGangFromNearestGangs;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer GangMissionScenarios;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<EMETA_Gang> GangsWithGangMissions;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TileSize, int32> TileCapacityBySize;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> CrewCapacity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DayOfBunkruptcyWhenHeistersStartLeavePlayer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TimeForCharactersMoodSwitchToNeutral;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer GoodTraits;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BadTraits;
    
    UPROPERTY(EditDefaultsOnly)
    float ChanceForNoTraits;
    
    UPROPERTY(EditDefaultsOnly)
    float ChanceForOneTrait;
    
    UPROPERTY(EditDefaultsOnly)
    float ChanceForTwoTraits;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationValueForMissionWithAllStars;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationValueForMissionWithTwoStars;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationValueForMissionWithOneStar;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationValueForMissionWithoutStars;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<EMETA_FPSMissionSubtype> FPSSubtypesNotAffectingInvestigation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPoliceInvestigationValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationPerKilledDetective;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationPerKilledCivilian;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationPerStartedBancruptcy;
    
    UPROPERTY(EditDefaultsOnly)
    EMETA_Heat HeatLevelWhenPoliceInvestigation100Percent;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> PoliceInvestigationIncreaseForElapsedDay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PoliceInvestigationChangeForTurfCapture;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_PoliceInvestigationChangeForGraph, int32> PoliceInvestigationChangeForGraphAction;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_AITiers, int32> SWATTierDependingOnInvestigation;
    
    UPROPERTY(EditDefaultsOnly)
    EMETA_Heat InitialHeatState;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InitialHeatValue;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval InternalHeatRange;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Heat, FMETA_HealLevelData> HeatLevelsData;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_HeatTurfWarData HeatBasedOnTurfWar;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_HeatHeistsData HeatBasedOnHeists;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag DetectiveObjectivePreset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval AmountOfDetectivesPerCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 GangTileThresholdForDetectiveSpawning;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FMETA_DetectivesInvestigationConfig> DetectivesConfigurationPerPoliceInvestigationPercent;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval PercentageOfSoldiersArrestedByDetectiveOnPlayersTile;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval AmountOfDaysDetectivesStaysOnTileAfterNeutralization;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_DetectiveChancesToAppear DetectiveChancesToAppear;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_AmbushConfig AmbushConfiguration;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, EMETA_AmbushType> AmbushTypes;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_IntelDataSetup IntelDataSetup;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseRandEventsCategoriesPriority;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EMETA_RandEventCategory> RandEventsCategoriesPriority;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RandEventCategory, FMETA_RandEventCategoryConfig> RandEventsCategoryConfig;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HowManyDaysGenericHeistersStayingInPoolForFuneral;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CooldownForFuneralOfGenericHeisters;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag SurvivalEventID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceForSurvivalMissionForUniqueCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceForSurvivalMissionForGenericCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval DaysIntervalForSurvivalEventAfterLoss;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag SelfReturnEventID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceForSelfReturnForUniqueCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceForSelfReturnForGenericCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval DaysIntervalForSelfReturnAfterLoss;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceToLosePrimaryWeaponAfterReturn;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceToLoseSecondaryWeaponAfterReturn;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceOfArrestForUniqueCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceOfArrestForGenericCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag MissingHeisterDeathEventID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceForDeathOfUniqueCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceForDeathOfGenericCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval DaysIntervalForDeathEventAfterLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DurationMoneyMakingOpportunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CooldownMoneyMakingOpportunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval MissionGeneratedEveryDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveUnfinishedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAmountOfActiveGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAmountOfAvailableGoals;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TradeRelationship, FMETA_TradeRelationshipInfo> TradeRelationshipInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TradeVendor, FMETA_GangTradeInfo> GangTradeInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FMETA_PerkInfo> PerkInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TradeVendor, EMETA_TradeRelationship> InitialTradeRelationship;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockedLootTagsForTrade;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxPriceCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float IncreasePriceCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TradeVendorCooldownAfterFailure;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval LootAmountPercentForAmbush;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GuaranteedPositiveTrends;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GuaranteedNegativeTrends;
    
    UPROPERTY(EditDefaultsOnly)
    float PositiveTrendChangeChance;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FMETA_PawnShopTrendData> TrendsData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RandomPoolSize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceOfUsingPriorityPool;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceOfCharacterCanBeSelectedForRevengePool;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval AmountOfSuccessfulMissionsForFirstUnlock;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval AmountOfSuccessfulMissionsForNextUnlocks;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RevengePoolSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_StatisticsRootTags StatisticsRootTags;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval AmountOfUnseenItemsToBeAddedForPurchase;
    
public:
    UMETA_CommonData();

    UFUNCTION(BlueprintPure)
    bool NeedRemoveUnfinishedMissions() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMissionGangMission(const FGameplayTag inScenario) const;
    
    UFUNCTION(BlueprintPure)
    TArray<EMETA_TradeVendor> GetVendorsForTrade(FGameplayTag inLootTag) const;
    
    UFUNCTION(BlueprintPure)
    void GetTrendDataByLootTag(FGameplayTag inMainLootTag, FMETA_PawnShopTrendData& outTrendData, bool& outSuccess) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTradeVendorCooldownAfterFailure() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_TradeRelationshipInfo GetTradeRelationshipInfo(EMETA_TradeRelationship inTradeRelationship, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTradeRelationshipData(TMap<EMETA_TradeRelationship, int32>& outBetterPriceChancesData, TMap<EMETA_TradeRelationship, int32>& outNoDealChancesData, TMap<EMETA_TradeRelationship, int32>& outVendorAttackChancesData);
    
    UFUNCTION(BlueprintPure)
    int32 GetTimeForCharactersMoodSwitchToNeutral() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTileCapacityBySize(const EMETA_TileSize inTileSize);
    
    UFUNCTION(BlueprintPure)
    FMETA_StatisticsRootTags GetStatisticsRootTags() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetStatisticsRootTagContainer() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_RespectLvl GetRespectLvlRelatedToTurfsAmount(int32 inTurfsUnderControl) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomPoolSize() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRandomizedPercentOfSoldiersArrestedByDetectiveOnPlayersTile();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomizedAmountOfDaysDetectivesStaysOnTileAfterNeutralization();
    
    UFUNCTION(BlueprintPure)
    TArray<EMETA_RandEventCategory> GetRandEventsCategoriesPriority() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_RandEventCategoryConfig GetRandEventCategoryConfig(EMETA_RandEventCategory inRandEventCategory);
    
    UFUNCTION(BlueprintCallable)
    void GetPricesForLootByVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag, int32 inAmountOfLoot, int32& outOriginPrice, int32& outIncreasePrice, int32& outMaxPrice);
    
    UFUNCTION(BlueprintPure)
    float GetPriceBonus(EMETA_TradeVendor inTradeVendor, FGameplayTag inLootTag) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPoliceInvestigationPerStartedBancruptcy() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPoliceInvestigationPerKilledDetective() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPoliceInvestigationPerKilledCivilian() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPoliceInvestigationIncreaseForElapsedDay(EMETA_RespectLvl inCurrentRespect) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPoliceInvestigationGradeByMissionObjectivesResults(bool inMissionSuccess, bool inClenExecObjectiveRes, bool inExtraObjectiveRes);
    
    UFUNCTION(BlueprintPure)
    int32 GetPoliceInvestigationChangeForTurfCapture() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_PoliceInvestigationChangeForGraph, int32> GetPoliceInvestigationChangeForGraphAction() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_CharacterID GetPlayersCharacterID() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, FMETA_PerkInfo> GetPerkInfoData() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_PerkInfo GetPerkInfo(FGameplayTag inPerk, bool& bSuccess) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxRevengePoolSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxPoliceInvestigationValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAmountOfAvailableGoals() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAmountOfActiveGoals() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetMainLootTagsForTrends() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_FloatInterval GetLootAmountPercentForAmbush() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_Interval GetInternalHeatRange();
    
    UFUNCTION(BlueprintCallable)
    EMETA_IntelUnlockLevel GetIntelUnlockedLevelByIntelValue(int32 inIntelLevel);
    
    UFUNCTION(BlueprintPure)
    FMETA_IntelDataSetup GetIntelDataSetup() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_TradeVendor, EMETA_TradeRelationship> GetInitialTradeRelationship() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInitialHeatValue() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_Heat GetInitialHeatState() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetID_SurvivalEvent() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetID_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetID_DeathEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHowManyDaysGenericHeistersStayingInPoolForFuneral() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeatTurfWarData GetHeatTurfWarData();
    
    UFUNCTION(BlueprintPure)
    EMETA_Heat GetHeatLevelWhenPoliceInvestigation100Percent() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_Heat, FMETA_HealLevelData> GetHeatLevelsData() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeatHeistsData GetHeatHeistsData();
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetGoodTraits() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_GangTradeInfo GetGangTradeInfo(EMETA_TradeVendor inTradeVendor, bool& bSuccess) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDurationMoneyMakingOpportunities() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_DetectivesInvestigationConfig GetDetectivesInvestigationConfigForPoliceInvestigationPercent(const int32 inPoliceInvestigationPercent, TSet<int32> inForbiddenValues, int32& outSelectedValue);
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetDetectiveObjectivePreset() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_DetectiveChancesToAppear GetDetectiveChancesToAppear();
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetDaysIntervalAfterLoss_SurvivalEvent() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetDaysIntervalAfterLoss_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetDaysIntervalAfterLoss_DeathEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDayOfBankruptcyWhenHeistersStartLeavePlayer() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_AITiers GetCurrentSWATTier(int32 inInvestigation);
    
    UFUNCTION(BlueprintPure)
    int32 GetCrewCapacity(EMETA_RespectLvl inBossStatus) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCooldownMoneyMakingOpportunities() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCooldownForFuneralOfGenericHeisters() const;
    
    UFUNCTION(BlueprintPure)
    float GetChanceToPickSecondaryGangFromNearestGangs() const;
    
    UFUNCTION(BlueprintPure)
    void GetChancesForWeaponsLoss_SelfReturnEvent(float& outChanceToLosePrimaryWeaponAfterReturn, float& outChanceToLoseSecondaryWeaponAfterReturn) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceOfUsingPriorityPool() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceOfCharacterCanBeSelectedForRevengePool() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForUnique_SurvivalEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForUnique_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForUnique_DeathEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForUnique_ArrestEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForGeneric_SurvivalEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForGeneric_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForGeneric_DeathEvent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceForGeneric_ArrestEvent() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_CampaignUserDifficultyConfiguration GetCampaignDifficultyConfiguration(const EIGS_UserDifficulty inUserDifficulty) const;
    
    UFUNCTION(BlueprintPure)
    void GetBossLoadout(UClass*& outPrimaryWeapon, UClass*& outSecondaryWeapon, UClass*& outEquipment) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetBadTraits() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAmountOfUnseenItemsToBeAddedForPurchase() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAmountOfSuccessfulMissionsForNextUnlocks() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAmountOfSuccessfulMissionsForFirstUnlock() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfMissionsCanBeCompletedByBossPerDay() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfInitialTraits() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAmountMissionGeneratedEveryDay() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_AmbushType GetAmbushTypeByFPSMissionTag(FGameplayTag inMissionTag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAmbushTagByType(EMETA_AmbushType inType) const;
    
    UFUNCTION(BlueprintPure)
    FMETA_AmbushConfig GetAmbushConfig();
    
    UFUNCTION(BlueprintPure)
    TSet<EMETA_Gang> FilterGangsWithGangMissions(const TArray<EMETA_Gang>& inAliveGangs) const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseRandEventsCategoriesPriority() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLootItemBeTradedWithVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag) const;
    
    UFUNCTION(BlueprintPure)
    bool CanFPSMissionAffectPoliceInvestigation(EMETA_FPSMissionSubtype inSubtype) const;
    
    UFUNCTION(BlueprintPure)
    bool CanFPSMissionAffectHeat(EMETA_FPSMissionSubtype inSubtype) const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateTrendDistribution(FGameplayTagContainer& outPositiveTrends, FGameplayTagContainer& outNegativeTrends);
    
    UFUNCTION(BlueprintPure)
    void CalculateNextTrendChangeDirection(bool& outPositive) const;
    
};

