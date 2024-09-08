#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_BonusType.h"
#include "EMETA_CampaignVictoryCondition.h"
#include "EMETA_Gang.h"
#include "EMETA_GraphStatus.h"
#include "IGS_PlotlineGraphData.h"
#include "META_CareerStartStuff.h"
#include "META_EnemyTierLimitOnCampaignStart.h"
#include "META_GangInitialConfiguration.h"
#include "META_Interval.h"
#include "META_UniqueCharacterGraphInfo.h"
#include "Templates/SubclassOf.h"
#include "META_PlotlineSelection.generated.h"

class UMETA_BaseGoal;
class UMETA_BaseStoryGraphManager;

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_PlotlineSelection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag CampaignModeTag;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMETA_BaseGoal> PrimaryGoal;
    
    UPROPERTY(EditDefaultsOnly)
    EMETA_CampaignVictoryCondition CampaignVictoryCondition;
    
    UPROPERTY(EditDefaultsOnly)
    FName StatisticsRoot;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_CareerStartStuff CareerStartConfiguration;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer StartingUnlocks;
    
    UPROPERTY(EditDefaultsOnly)
    float InvestigationGrowth;
    
    UPROPERTY(EditDefaultsOnly)
    float FinalScoreMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_Interval> PlotlineDaysArray;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval AnyNextPlotlineDays;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> StartedGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UMETA_BaseStoryGraphManager>> GraphsCanBeExecutedWhenGameFinished;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterGraphInfo> CharacterStoryGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FIGS_PlotlineGraphData> PlotlineGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> CrewRandEventsGraph;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> SpecialCrewEventsGraph;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> EntitlementGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval InitialTerritoryAmount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InitialSoldiersAmount;
    
    UPROPERTY(EditDefaultsOnly)
    EMETA_ArmyTier InitialArmyTier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTagContainer> PlayerTileGroups;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<EMETA_BonusType> IgnoredBossBonuses;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_EnemyTierLimitOnCampaignStart EnemyTierLimitOnCampaignStart;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Gang, FMETA_GangInitialConfiguration> GangsInitialConfiguration;
    
public:
    UMETA_PlotlineSelection();

    UFUNCTION(BlueprintPure)
    bool IsBossBonusIgnored(EMETA_BonusType inBonusType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetStartingUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> GetStartedGraphs(const TArray<EIGS_CharacterID>& inAvailableUniqueCharacters);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetSpecialCrewEventsGraph() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomizedValidTileGroup() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomizedPlayersInitialTerritory() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_BaseGoal> GetPrimaryGoalID() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_PlotlineGraphData> GetPlotlineGraphs();
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_Interval> GetPlotlineDaysArray() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTagContainer> GetPlayerTileGroups() const;
    
    UFUNCTION(BlueprintPure)
    float GetInvestigationGrowthMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInitialSoldiersAmount() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_ArmyTier GetInitialArmyTier() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangInitialConfiguration GetGangInitialConfig(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintPure)
    float GetFinalScoreMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> GetEntitlementsGraph() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_EnemyTierLimitOnCampaignStart GetEnemyTierLimitOnCampaignStart() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetCrewRandEventsGraph() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo);
    
    UFUNCTION(BlueprintPure)
    FMETA_CareerStartStuff GetCareerStartStuff() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_CampaignVictoryCondition GetCampaignVictoryCondition() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCampaignModeTag() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAnyNextPlotlineDays() const;
    
    UFUNCTION(BlueprintPure)
    bool CanGraphBeExecutedWhenGameFinished(const TSoftObjectPtr<UMETA_BaseStoryGraphManager>& inGraph) const;
    
};

