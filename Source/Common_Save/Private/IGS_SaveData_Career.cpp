#include "IGS_SaveData_Career.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_DetectiveID.h"
#include "META_Loan.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_EventTime.h"
#include "EMETA_Gang.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_Heat.h"
#include "EMETA_Partner.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "EMETA_RandEventCategory.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TradeRelationship.h"
#include "EMETA_TradeVendor.h"
#include "EMETA_UsingCrewInGraph.h"
#include "META_ActionCardID.h"
#include "META_ActionCardStrenghtAmount.h"
#include "META_BMEventLootData.h"
#include "META_BaseGoal.h"
#include "META_CharacterID.h"
#include "META_DetectiveInfo.h"
#include "META_EquipmentQualityChance.h"
#include "META_EquipmentSaveData.h"
#include "META_FinishedGoal.h"
#include "META_FinishedMissionInfo.h"
#include "META_GangArmyTierChangeQueueData.h"
#include "META_GangInfo.h"
#include "META_GoalsObjectIDCounter.h"
#include "META_HeisterStateChangeHistory.h"
#include "META_HeistersOnEvent.h"
#include "META_HiddenGoalID.h"
#include "META_HiddenGoalsSaveInfo.h"
#include "META_JobParameters.h"
#include "META_MissingHeisterEventData.h"
#include "META_MissionID.h"
#include "META_PartnerInfo.h"
#include "META_PawnShopTrendDataRuntime.h"
#include "META_RandEventCategoryInfo.h"
#include "META_RandEventRewardRuntimeDataStorage.h"
#include "META_TileSaveData.h"
#include "META_TurfHistory.h"
#include "META_VendorLootKey.h"
#include "META_WeaponClassChance.h"
#include "META_WeaponQualityChance.h"
#include "META_WeaponSaveData.h"
#include "META_WeaponSaveDataArray.h"
#include "META_GenericCharacterSave.h"
#include "META_GoalSave.h"
#include "META_GraphNodeSave.h"
#include "META_GraphStructSave.h"
#include "META_HeisterSaveData.h"
#include "META_LoopBranchNodeSaveData.h"
#include "META_MoneyMakingGoalSave.h"
#include "META_PlayedPresets.h"
#include "META_RemovedCharacter.h"
#include "META_StatisticNoteSaveData.h"
#include "META_TimerNodeSaveData.h"
#include "Templates/SubclassOf.h"

class UMETA_BaseActionCard;
class UMETA_BaseStoryGraphManager;

FIGS_SaveData_Career::FIGS_SaveData_Career() {
    (*this).SaveSlot = TEXT("");
    (*this).bIsFilled = false;
    (*this).CampaignVersion = TEXT("");
    (*this).BlackmarketManagerData.GenericRecruitsPool = TArray<FMETA_GenericCharacterSave>{};
    (*this).BlackmarketManagerData.GenericCheapRecruitsPool = TArray<FMETA_GenericCharacterSave>{};
    (*this).BlackmarketManagerData.UniqueRecruitsPool = TArray<FMETA_HeisterSaveData>{};
    (*this).BlackmarketManagerData.WeaponsBlackmarket = TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>{};
    (*this).BlackmarketManagerData.EquipmentBlackmarket = TMap<TSubclassOf<UIGS_EquipmentInventoryObject>, FMETA_EquipmentSaveData>{};
    (*this).BlackmarketManagerData.UnseenUnlockedCharacterTagIDs = TArray<FGameplayTag>{};
    (*this).BlackmarketManagerData.UnseenUnlockedWeaponTagIDs = TArray<FGameplayTag>{};
    (*this).BlackmarketManagerData.UnseenUnlockedEquipmentTagIDs = TArray<FGameplayTag>{};
    (*this).BlackmarketManagerData.GenericPrevID = 0;
    (*this).BlackmarketManagerData.DayWhenHeistersMarketBecameAvailable = 0;
    (*this).BlackmarketManagerData.DayWhenWeaponsMarketBecameAvailable = 0;
    (*this).BlackmarketManagerData.PlotlineAssetsPool = TArray<FGameplayTag>{};
    (*this).BlackmarketManagerData.TemporaryLockedPlotlineAssetsTags = FGameplayTagContainer();
    (*this).BlackmarketManagerData.ActiveLootEvent.Vendor = EMETA_TradeVendor::UNDEFINED;
    (*this).BlackmarketManagerData.ActiveLootEvent.LootTag = FGameplayTag();
    (*this).BlackmarketManagerData.ActiveLootEvent.MinLootValue = 0;
    (*this).BlackmarketManagerData.ActiveLootEvent.MissionID = nullptr;
    (*this).BlackmarketManagerData.ReadyLootEvents = TMap<FMETA_VendorLootKey, FMETA_BMEventLootData>{};
    (*this).BlackmarketManagerData.BaseDayForLootEvents = 0;
    (*this).BlackmarketManagerData.WeaponEvent.Cooldown = 0;
    (*this).BlackmarketManagerData.WeaponEvent.MinAvailableCash = 0;
    (*this).BlackmarketManagerData.WeaponEvent.NumberOfWeaponsPerEvent = 1;
    (*this).BlackmarketManagerData.WeaponEvent.ExpirationTime = 0;
    (*this).BlackmarketManagerData.WeaponEvent.WeaponClassesChances = TArray<FMETA_WeaponClassChance>{};
    (*this).BlackmarketManagerData.WeaponEvent.WeaponQualitiesChances = TArray<FMETA_WeaponQualityChance>{};
    (*this).BlackmarketManagerData.WeaponsEventPool = TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>{};
    (*this).BlackmarketManagerData.BaseDayForWeaponEvent = 0;
    (*this).BlackmarketManagerData.EquipmentEvent.Cooldown = 0;
    (*this).BlackmarketManagerData.EquipmentEvent.MinAvailableCash = 0;
    (*this).BlackmarketManagerData.EquipmentEvent.NumberOfEquipmentPerEvent = 1;
    (*this).BlackmarketManagerData.EquipmentEvent.ExpirationTime = 0;
    (*this).BlackmarketManagerData.EquipmentEvent.EquipmentQualitiesChances = TArray<FMETA_EquipmentQualityChance>{};
    (*this).BlackmarketManagerData.EquipmentEventPool = TArray<FMETA_EquipmentSaveData>{};
    (*this).BlackmarketManagerData.BaseDayForEquipmentEvent = 0;
    (*this).BlackmarketManagerData.WeaponsPoolRefreshesCounter = 0;
    (*this).BlackmarketManagerData.WeaponsPoolRefreshesPrice = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.SoldierCostMultiplierForAttack = 0.000000000e+00f;
    (*this).BlackmarketManagerData.HireArmyEventData.SoldierCostMultiplierForAttackNeutral = 0.000000000e+00f;
    (*this).BlackmarketManagerData.HireArmyEventData.SoldierCostMultiplierForDefense = 0.000000000e+00f;
    (*this).BlackmarketManagerData.HireArmyEventData.SoldierUpkeepCost = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.SoldierHireCost = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.SoldierHireCostMultiplierInPercent = 0.000000000e+00f;
    (*this).BlackmarketManagerData.HireArmyEventData.HireArmyEventConfig.SoldierHireAmountPerHireEvent.Min = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.HireArmyEventConfig.SoldierHireAmountPerHireEvent.Max = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.HireArmyEventConfig.ShouldBeClampedByArmyCapacity = false;
    (*this).BlackmarketManagerData.HireArmyEventData.HireArmyEventConfig.ClampedMinimumArmy = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.HireEventDelay.Min = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.HireEventDelay.Max = 0;
    (*this).BlackmarketManagerData.HireArmyEventData.HireEventDurationTime = 0;
    (*this).BlackmarketManagerData.AmountOfGeneratedSoldiers = 0;
    (*this).BlackmarketManagerData.BaseDayForHireArmyEvent = 0;
    (*this).BlackmarketManagerData.AmountOfBoughtCheapHeisters = 0;
    (*this).BlackmarketManagerData.HeistersPoolRefreshesCounter = 0;
    (*this).BlackmarketManagerData.HeistersPoolRefreshPrice = 0;
    (*this).CrewManagerData.GenericCrewHeisters = TArray<FMETA_GenericCharacterSave>{};
    (*this).CrewManagerData.UniqueCrewHeisters = TArray<FMETA_HeisterSaveData>{};
    (*this).CrewManagerData.GenericHeistersOnJob = TArray<FMETA_GenericCharacterSave>{};
    (*this).CrewManagerData.UniqueHeistersOnJob = TArray<FMETA_HeisterSaveData>{};
    (*this).CrewManagerData.RemovedHeisters = TArray<FMETA_RemovedCharacter>{};
    (*this).CrewManagerData.ExcludedHeisters = FGameplayTagContainer();
    (*this).CrewManagerData.RecoveryInfoOfHeistersInjures = TMap<FMETA_CharacterID, float>{};
    (*this).CrewManagerData.HeistersMoodResetCounter = TMap<FMETA_CharacterID, int32>{};
    (*this).CrewManagerData.CounterOfDeathPreventingUsage = TMap<FMETA_CharacterID, int32>{};
    (*this).CrewManagerData.RevengePool = TSet<EIGS_CharacterID>{};
    (*this).CrewManagerData.UnlockedCharacters = TSet<EIGS_CharacterID>{};
    (*this).CrewManagerData.RemainAmountOfCompletedMissionsBeforeUnlock = 0;
    (*this).CrewManagerData.RemainAmountOfDaysForHealingCharacter = TMap<FMETA_CharacterID, int32>{};
    (*this).DailyManagerData.CurrentDay = 0;
    (*this).StashManagerData.WeaponsStash = TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray>{};
    (*this).StashManagerData.Equipment = TArray<FMETA_EquipmentSaveData>{};
    (*this).StashManagerData.ActionCards = TMap<TSoftClassPtr<UMETA_BaseActionCard>, FMETA_ActionCardStrenghtAmount>{};
    (*this).StashManagerData.ActionCardsDurationCounter = TMap<FMETA_ActionCardID, int32>{};
    (*this).StashManagerData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).StashManagerData.Army = 0;
    (*this).StashManagerData.AvailableArmy = 0;
    (*this).StashManagerData.ArmyTier = EMETA_ArmyTier::Low;
    (*this).StashManagerData.PartnersInfo = TMap<EMETA_Partner, FMETA_PartnerInfo>{};
    (*this).StashManagerData.Loot = TMap<FGameplayTag, int32>{};
    (*this).StashManagerData.CurrentLootValueWasSoldToPawnShop = 0;
    (*this).StashManagerData.PawnShopTrends = TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime>{};
    (*this).StashManagerData.LastDayWhenWarehouseAttackStarted = -1;
    (*this).StashManagerData.ChanceWarehouseAttack = 0;
    (*this).StashManagerData.WarehouseAttackMissionID = nullptr;
    (*this).StashManagerData.LootForWarehouseAttack = TMap<FGameplayTag, int32>{};
    (*this).StashManagerData.MoneyForWarehouseAttack = 0;
    (*this).EventManagerData.DefaultGraphValues = TArray<FMETA_GraphStructSave>{};
    (*this).EventManagerData.HeistersOnEvent = TMap<FGameplayTag, FMETA_HeistersOnEvent>{};
    (*this).EventManagerData.EventTime = EMETA_EventTime::DayStart;
    (*this).EventManagerData.SavedGraphVariables = TMap<FGameplayTag, int32>{};
    (*this).EventManagerData.bPoolFrozen = false;
    (*this).EventManagerData.SavedTimerNodes = TMap<FMETA_GraphNodeSave, FMETA_TimerNodeSaveData>{};
    (*this).EventManagerData.SavedLoopBranchNodes = TMap<FMETA_GraphNodeSave, FMETA_LoopBranchNodeSaveData>{};
    (*this).EventManagerData.FinishedGraphsResults = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus>{};
    (*this).EventManagerData.PreparedPlotlines = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>{};
    (*this).EventManagerData.ExecutingPlotlines = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>{};
    (*this).EventManagerData.SavedEconomyGraphVariables = TMap<FGameplayTag, int32>{};
    (*this).EventManagerData.SavedParentGraphs = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>{};
    (*this).EventManagerData.bShouldCallEndDay = false;
    (*this).EventManagerData.bEndDayWasCalled = false;
    (*this).GoalManagerData.StoryGoalsSave = TArray<FMETA_GoalSave>{};
    (*this).GoalManagerData.MoneyMakingGoalsSave = TArray<FMETA_MoneyMakingGoalSave>{};
    (*this).GoalManagerData.GoalsPools = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).GoalManagerData.BacklogGoalsPools = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).GoalManagerData.FinishedGoals = TArray<FMETA_FinishedGoal>{};
    (*this).GoalManagerData.GoalsRepeatCounters = TArray<FMETA_GoalsObjectIDCounter>{};
    (*this).GoalManagerData.HiddenGoalsData = TMap<TSubclassOf<UMETA_HiddenGoalID>, FMETA_HiddenGoalsSaveInfo>{};
    (*this).JobManagerData.CurrentJob = nullptr;
    (*this).JobManagerData.CurrentJobTileID = FGameplayTag();
    (*this).JobManagerData.JobsOnMap.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).JobManagerData.JobsOnMap.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).JobManagerData.JobsOnMap.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).JobManagerData.JobsOnMap.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).JobManagerData.JobsOnMap.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).JobManagerData.JobsOnMap.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).JobManagerData.JobsOnMap.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).JobManagerData.JobsOnMap.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).JobManagerData.JobParameters = TMap<TSubclassOf<UMETA_MissionID>, FMETA_JobParameters>{};
    (*this).JobManagerData.JobsCompletedAmount = 0;
    (*this).JobManagerData.JobsSpawnDay = TMap<TSubclassOf<UMETA_MissionID>, int32>{};
    (*this).JobManagerData.bWasPlayerTransferredToFPSSide = false;
    (*this).JobManagerData.FinishedMissions = TMap<TSubclassOf<UMETA_MissionID>, FMETA_FinishedMissionInfo>{};
    (*this).JobManagerData.bUsingTemporaryCrewAfterFPS = EMETA_UsingCrewInGraph::TemporaryCrew;
    (*this).JobManagerData.RecentlyPlayedPresetsPerScenario = TMap<FGameplayTag, FMETA_PlayedPresets>{};
    (*this).JobManagerData.RecentlyPlayedJobData = TMap<FGameplayTag, int32>{};
    (*this).RandomEventManagerData.RandEventCategoriesInfo = TMap<EMETA_RandEventCategory, FMETA_RandEventCategoryInfo>{};
    (*this).RandomEventManagerData.CurrentPartnersRandEvents = TMap<EMETA_Partner, FGameplayTag>{};
    (*this).RandomEventManagerData.ReadyForActivationEvents = TMap<EMETA_Partner, FGameplayTag>{};
    (*this).RandomEventManagerData.EventsSpecificCooldown = TMap<FGameplayTag, int32>{};
    (*this).RandomEventManagerData.SelectedGangForEvent = TMap<FGameplayTag, EMETA_Gang>{};
    (*this).RandomEventManagerData.EventRewards = TMap<FGameplayTag, FMETA_RandEventRewardRuntimeDataStorage>{};
    (*this).RandomEventManagerData.CrewEventMissions = TMap<FGameplayTag, TSubclassOf<UMETA_MissionID>>{};
    (*this).RandomEventManagerData.CalculatedCostForGenericEvents = TMap<FGameplayTag, int32>{};
    (*this).RandomEventManagerData.CrewEventMissionsPrices = TMap<TSubclassOf<UMETA_MissionID>, FGameplayTag>{};
    (*this).RandomEventManagerData.CrewEventsAndTheirGraphs = TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>{};
    (*this).RandomEventManagerData.HeistersStateChangesHistory = TMap<FMETA_CharacterID, FMETA_HeisterStateChangeHistory>{};
    (*this).RandomEventManagerData.MissingHeistersEventsData = TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData>{};
    (*this).RandomEventManagerData.CooldownCounterForFuneralOfGenericHeisters = 0;
    (*this).RandomEventManagerData.UnfulfilledEvents = TMap<FGameplayTag, bool>{};
    (*this).CityMapManagerData.TilesSaveData = TMap<FGameplayTag, FMETA_TileSaveData>{};
    (*this).CityMapManagerData.BaseStrengthOfTiles = TMap<FGameplayTag, int32>{};
    (*this).CityMapManagerData.LastDayOfTilesIncomeRefresh = 0;
    (*this).WarManagerData.GangsInfo = TMap<EMETA_Gang, FMETA_GangInfo>{};
    (*this).WarManagerData.ChanceCounterToAttackAdjacentTerritory = TMap<EMETA_Gang, float>{};
    (*this).WarManagerData.AttemptsToCaptureTileCounter = 0;
    (*this).WarManagerData.TradeRelationshipWithGangs = TMap<EMETA_TradeVendor, EMETA_TradeRelationship>{};
    (*this).WarManagerData.GangAttacksCooldown = TMap<EMETA_Gang, int32>{};
    (*this).WarManagerData.CounterForSpecialTier = TMap<EMETA_Gang, int32>{};
    (*this).WarManagerData.TradeVendorsCooldown = TMap<EMETA_TradeVendor, int32>{};
    (*this).WarManagerData.TodaysLockedTilesForAI = TArray<FGameplayTag>{};
    (*this).WarManagerData.TurfHistory = TMap<int32, FMETA_TurfHistory>{};
    (*this).WarManagerData.DaysWithMoreAttack = 0;
    (*this).WarManagerData.AILastTileConfigIndex = 0;
    (*this).WarManagerData.bIsAllTileCaptured = false;
    (*this).WarManagerData.bIsAllGangsEradicated = false;
    (*this).WarManagerData.GangChangeArmyTierQueue = TMap<EMETA_Gang, FMETA_GangArmyTierChangeQueueData>{};
    (*this).FinanceManagerData.Balance = 0;
    (*this).FinanceManagerData.HiredCrewSpending = 0;
    (*this).FinanceManagerData.MarketSpending = 0;
    (*this).FinanceManagerData.DayWhenPlayerReachedBankruptState = 0;
    (*this).FinanceManagerData.CurrentLoan.ActivatedDay = 0;
    (*this).FinanceManagerData.CurrentLoan.BorrowedCash = 0.000000000e+00f;
    (*this).FinanceManagerData.CurrentLoan.DailyRepaymentInPercentsFromBorrowedCash = 0;
    (*this).FinanceManagerData.CurrentLoan.DaysToRepay = 0;
    (*this).FinanceManagerData.CurrentLoan.CooldownToNextOffer = 0;
    (*this).FinanceManagerData.CurrentLoanOffers = TArray<FMETA_Loan>{};
    (*this).FinanceManagerData.CooldownToNextOffer = 0;
    (*this).FinanceManagerData.MissionIncome = 0;
    (*this).FinanceManagerData.TradeIncome = 0;
    (*this).FinanceManagerData.OtherIncome = 0;
    (*this).FinanceManagerData.OtherSpending = 0;
    (*this).MoneyMakingOpportunitiesData.bStarted = false;
    (*this).MoneyMakingOpportunitiesData.StartDay = 0;
    (*this).MoneyMakingOpportunitiesData.FinishDay = 0;
    (*this).HeatManagerData.DaysLeftForTheHeatRevision = 0;
    (*this).HeatManagerData.HeatState = EMETA_Heat::VeryLow;
    (*this).HeatManagerData.HeatValue = 0.000000000e+00f;
    (*this).HeatManagerData.PoliceInvestigationValue = 0.000000000e+00f;
    (*this).HeatManagerData.SheriffTargetGang = EMETA_Gang::None;
    (*this).HeatManagerData.GangsAttacksCounter = TMap<EMETA_Gang, int32>{};
    (*this).HeatManagerData.DetectivesPool = TArray<TSubclassOf<UMETA_DetectiveID>>{};
    (*this).HeatManagerData.ActiveDetectives = TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo>{};
    (*this).HeatManagerData.UsedInvestigationValuesForDetectives = TSet<int32>{};
    (*this).HeatManagerData.DeadDetectives = TArray<TSubclassOf<UMETA_DetectiveID>>{};
    (*this).HeatManagerData.InvestigationEffects = TMap<FGameplayTag, int32>{};
    (*this).HeatManagerData.HeatEffects = TMap<FGameplayTag, int32>{};
    (*this).BossLevelManagerData.AmountOfPrimaryWeaponsIssued = 0;
    (*this).BossLevelManagerData.AmountOfAdditionalEquipmentIssued = 0;
    (*this).StatisticsManagerData.Statistic = TMap<int32, FMETA_StatisticNoteSaveData>{};
    (*this).PlanningBoardManagerData.ActivePlanningBoardTag = FGameplayTag();
    (*this).PlanningBoardManagerData.PlanningBoardItemsStatuses = TMap<FGameplayTag, EMETA_PlanningBoardItemStatus>{};
    (*this).CareerEnd.bIsPending = false;
    (*this).CareerEnd.bChallengeRewardGenerated = false;
    (*this).CareerEnd.bRewardsClaimed = false;
    (*this).CareerEnd.Reason = EMETA_CareerCompletionReason::NoTurfTiles;
    (*this).CareerEnd.BossKilledBy = EMETA_Gang::None;
    (*this).SaveDataVersion.JsonVersion = 0;
    (*this).SaveDataVersion.RevisionCreated = TEXT("");
    (*this).SaveDataVersion.RevisionSaved = TEXT("");
    (*this).SaveDataVersion.SnapshotRevision = TEXT("");
    (*this).StartingEntitlementTags = TArray<FGameplayTag>{};
}
