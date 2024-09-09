#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "EMETA_GangStrategy.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TurfMissionDifficulty.h"
#include "META_AILastTileStrengthConfig.h"
#include "META_ArmySizeConfigForAI.h"
#include "META_ConditionForArmyTierChanging.h"
#include "META_DefenceResultCalculatingConfigForAI.h"
#include "META_EffectOnAIBossStrength.h"
#include "META_FloatInterval.h"
#include "META_GangPriorityChangeInfo.h"
#include "META_GangSpawnWeakenMission.h"
#include "META_GangStrategyPropertiesConfig.h"
#include "META_Interval.h"
#include "META_PlayerEndAgonyConfig.h"
#include "META_TurfActionWeaknessStrengthData.h"
#include "META_UIArmySizeConfig.h"
#include "META_WeakenMissionTurfActionGenData.h"
#include "META_TurfWarData.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_TurfWarData : public UDataAsset {
    GENERATED_BODY()
public:
    UMETA_TurfWarData();

    UFUNCTION(BlueprintPure)
    float RandomizeSoldiersCasualtiesInPercentsAfterNeutralAttack() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaknessChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_WeakenMissionTurfActionGenData GetWeakenMissionTurfActionGenData(EMETA_RespectLvl inRespect, bool inDoesGangHaveSpecialTier, bool inDoesGangHaveWeakenArmyTierModifier);
    
    UFUNCTION(BlueprintPure)
    FMETA_UIArmySizeConfig GetUIArmySizeConfigDefense() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_UIArmySizeConfig GetUIArmySizeConfig() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_TurfMissionDifficulty GetTurfMissionDifficulty(int32 inAiArmySize) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfActionWeaknessStrengthData GetTurfActionWeaknessStrengthData(EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetTileWeaknessInterval() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetTileStrengthInterval() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetTileStartingBaseStrength() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTileCurrentStrengthChangeWhenPlayerWinsDefense() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTileCurrentStrengthChangeWhenPlayerLosesAttack() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakWhenAIBossHasOnly3Tiles() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakWhenAIBossHasOnly2Tiles() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakWhenAIBossHasDifferentAmountOfTiles() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetStrengthTweaksIntervalForAIBossAfterTerritoryChanges() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileLosingToPlayer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileLosingToAI() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileCapturingFromPlayer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthTweakForAIBossAfterTileCapturingFromAI() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_EffectOnAIBossStrength GetStrengthChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthChangeIfWillCreateIsolatedTile() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthChangeIfTileIsolated() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStrengthChangeIfTileConnected() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTagContainer> GetPlayersInitialTileGroups() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayersInitialSoldiersAmount() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_ArmyTier GetPlayersInitialArmyTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile(int32 inIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile(int32 inIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayersArmyLimit(EMETA_RespectLvl inPlayerRespect) const;
    
    UFUNCTION(BlueprintPure)
    FMETA_PlayerEndAgonyConfig GetPlayerEndAgonyConfig() const;
    
    UFUNCTION(BlueprintPure)
    float GetNumberOfEnemySoldiersMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    void GetMinAmountOfSoldiersForAttackAndDefence(EMETA_RespectLvl inRespectLvl, int32& outMinForAttack, int32& outMinForDefence) const;
    
    UFUNCTION(BlueprintPure)
    EMETA_ArmyTier GetMaxArmyTierForInnerUpgrades() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLastTileStrengthChangePerWeakenMissionCompletedOnLastTile() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_GangStrategyPropertiesConfig GetGangStrategyProperties(EMETA_Gang inGang, EMETA_GangStrategy inStrategy) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangSpawnWeakenMission GetGangSpawnWeakenMissionInfo(int32 inGangPriority);
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangPriorityChangeInfo GetGangPriorityChangeInfo();
    
    UFUNCTION(BlueprintPure)
    int32 GetGangCooldownForChangeArmyTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDurationOfLostTerritoryRemembering() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDurationInsideEnemiesList() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_DefenceResultCalculatingConfigForAI GetDefenceResultCalculationConfigForAI();
    
    UFUNCTION(BlueprintPure)
    int32 GetDaysAmountForMoreAttacksk() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce() const;
    
    UFUNCTION(BlueprintPure)
    void GetDataSetup_IfEnemyTierLowerThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) const;
    
    UFUNCTION(BlueprintPure)
    void GetDataSetup_IfEnemyTierHigherThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCountdownForAttackAfterLostTile() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_ConditionForArmyTierChanging> GetConditionsForArmyTierChanging();
    
    UFUNCTION(BlueprintPure)
    float GetChanceToAttackNeutralTerritoryByAI() const;
    
    UFUNCTION(BlueprintPure)
    float GetChanceToAttackInRetaliatorTactic() const;
    
    UFUNCTION(BlueprintPure)
    float GetChanceToAttackAdjacentTerritoryToTheGangFromEnemiesList() const;
    
    UFUNCTION(BlueprintPure)
    float GetChanceIncreaseToAttackAnyAdjacentTerritoryByAI() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseChanceToAttackAnyAdjacentTerritoryByAI() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttemptsToCaptureTerritory() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EMETA_Gang> GetArrayOfGangsWhichCanAttackAnyTile();
    
    UFUNCTION(BlueprintPure)
    FMETA_ArmySizeConfigForAI GetArmySizeLimitsByPlayerRespect(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfFriendlyNeighbourTilesToConsiderTileAsConnected() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfAttackskForMoreAttacksDays() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EMETA_GangStrategy> GetAIStrategiesThatAttackMore();
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAIArmySizeForPlayersAttackOnLastTile(int32 inIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool CheckPossibilityToAttackTilesAroundDetective() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPlayerLoseAllSentSoldiersAfterFailedDefence() const;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    EMETA_ArmyTier MaxArmyTierForInnerUpgrades;
    
    UPROPERTY(EditDefaultsOnly)
    bool CanTilesAroundDetectiveBeAttacked;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_ArmySizeConfigForAI> ArmySizeLimitsPerPlayerRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_AILastTileStrengthConfig> AILastTileStrengthConfig;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AttemptsToCaptureTerritory;
    
    UPROPERTY(EditDefaultsOnly)
    bool PlayerLoseAllSentSoldiersAfterFailedDefence;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InitialSoldiersAmount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CountdownForAttackAfterLostTile;
    
    UPROPERTY(EditDefaultsOnly)
    EMETA_ArmyTier InitialArmyTier;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> PlayersArmyLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> RelationOfTurfsToRespect;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTagContainer> PlayerTileGroups;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval SoldiersCasualtiesInPercentsAfterNeutralAttack;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> MinimalAmountOfSoldiersToAttackTile;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, int32> MinimalAmountOfSoldiersToDefendTile;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_PlayerEndAgonyConfig PlayerEndAgonyConfig;
    
    UPROPERTY(EditDefaultsOnly)
    float NumberOfEnemySoldiersMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float ArmyTierMultiplier_IfEnemyTierHigherThanPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval ArmyTierDifferenceClamp_IfEnemyTierHigherThanPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    float ArmyTierMultiplier_IfEnemyTierLowerThanPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_FloatInterval ArmyTierDifferenceClamp_IfEnemyTierLowerThanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HowManyDaysGangRememberLostTerritory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HowManyDaysGangExistsInEnemiesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HowManyDaysGangCanAttackMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HowManyAttacksCanDoGangsForDaysWithHighNumberAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMETA_GangStrategy> StrategiesThatCanAttackMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_ConditionForArmyTierChanging> ConditionsForArmyTierChanging;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_DefenceResultCalculatingConfigForAI DefenceResultCalculationConfigForAI;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EMETA_Gang> GangsWhichCanAttackAnyTile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GangCooldownForChangeArmyTier;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_GangPriorityChangeInfo GangPriorityChangeInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_GangSpawnWeakenMission> GangSpawnWeakenMissionInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_WeakenMissionTurfActionGenData> WeakenMissionTurfActionGenData;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_TurfActionWeaknessStrengthData> TurfActionWeaknessStrengthData;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> NormalGangStrategyProperties;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> DefensiveGangStrategyProperties;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> ConquerorGangStrategyProperties;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> RetaliatorGangStrategyProperties;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_Gang, FMETA_GangStrategyPropertiesConfig> RageGangStrategyProperties;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_TurfMissionDifficulty, int32> TurfMissionDifficultyConfig;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinTileStrength;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxTileStrength;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval StartingTileBaseStrength;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TileCurrentStrengthChangeWhenPlayerLosesAttack;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TileCurrentStrengthChangeWhenPlayerWinsDefense;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthChangeIfTileIsolated;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AmountOfFriendlyNeighbourTilesToConsiderTileAsConnected;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthChangeIfTileConnected;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthChangeIfTileWillCreateIsolatedTile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LastTileStrengthChangePerWeakenMissionCompletedOnLastTile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinTileWeakness;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxTileWeakness;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakWhenAIBossHasOnly2Tiles;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakWhenAIBossHasOnly3Tiles;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakWhenAIBossHasDifferentAmountOfTiles;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_AIBossStrengthChangeIntensity, FMETA_EffectOnAIBossStrength> StrengthChangeIntensityConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_AIBossStrengthChangeIntensity, int32> WeaknessChangeIntensityConfig;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval StrengthTweaksIntervalForAIBossAfterTerritoryChanges;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakForAIBossAfterTileLosingToAI;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakForAIBossAfterTileLosingToPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakForAIBossAfterTileCapturingFromAI;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StrengthTweakForAIBossAfterTileCapturingFromPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceToAttackNeutralTurf;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceToAttackInRetaliatorTactic;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BaseChanceToAttackAnyAdjacentTerritoryByAI;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceIncreaseToAttackAnyAdjacentTerritoryByAI;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceToAttackTerritoryBelongingToTheGangFromEnemyList;
    
    UPROPERTY(EditAnywhere)
    FMETA_UIArmySizeConfig UIArmySizeConfigValues;
    
    UPROPERTY(EditAnywhere)
    FMETA_UIArmySizeConfig UIArmySizeConfigValuesDefense;
    
};

