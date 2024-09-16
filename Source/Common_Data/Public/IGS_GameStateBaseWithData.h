#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_HubScenarioType.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_Heat.h"
#include "EMETA_LobbyVisibilityType.h"
#include "EMETA_RespectLvl.h"
#include "META_ObjectiveTableRow.h"
#include "CommonHeisterData.h"
#include "EIGS_MPLobbyType.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_QPModeSource.h"
#include "IGS_GameStateData.h"
#include "IGS_GameStateDataReadyDelegate.h"
#include "IGS_SpecialLoot.h"
#include "META_FPSBonusesFromMeta.h"
#include "IGS_GameStateBaseWithData.generated.h"

UCLASS()
class COMMON_DATA_API AIGS_GameStateBaseWithData : public AGameStateBase {
    GENERATED_BODY()
public:
    AIGS_GameStateBaseWithData(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool SupportsCleanExecution() const;

    UFUNCTION(BlueprintCallable)
    void SetSpecificLootTypes(FGameplayTagContainer inSpecificLootTypes);

    UFUNCTION(BlueprintCallable)
    void SetSpecialLoot(FIGS_SpecialLoot inSpecialLoot);

    UFUNCTION(BlueprintCallable)
    void SetRespect(EMETA_RespectLvl inRespect);

    UFUNCTION(BlueprintCallable)
    void SetProgressionLevel(int32 inLevel);

    UFUNCTION(BlueprintCallable)
    void SetMissionValues(int32 inNeededMoney, int32 inMaxMoney);

    UFUNCTION(BlueprintCallable)
    void SetMissionTag(FGameplayTag inMissionTag);

    UFUNCTION(BlueprintCallable)
    void SetMissionScenario(FGameplayTag inMissionScenario);

    UFUNCTION(BlueprintCallable)
    void SetMissionName(FText inMissionName);

    UFUNCTION(BlueprintCallable)
    void SetLightScenario(const EIGS_LightingScenarioType inLightScenario);

    UFUNCTION(BlueprintCallable)
    void SetGameStateDataDEBUG(FIGS_GameStateData inData);

    UFUNCTION(BlueprintCallable)
    void SetDownedCharactersSurvive(bool inShouldSurvive);

    UFUNCTION(BlueprintCallable)
    void SetDebugTile(const FString& inDebugTile);

    UFUNCTION(BlueprintCallable)
    void SetDebugPreset(const FString& inDebugPreset);

    UFUNCTION(BlueprintNativeEvent)
    void ProgressionLevelSet();

protected:
    UFUNCTION()
    void OnRep_GameStateData();

    UFUNCTION(BlueprintImplementableEvent)
    void OnGameStateDataReadyEvent();

public:
    UFUNCTION(BlueprintCallable)
    void MarkDataFinal();

    UFUNCTION(BlueprintPure)
    int32 GetWantedBadges() const;

    UFUNCTION(BlueprintPure)
    EIGS_UserDifficulty GetUserDifficulty() const;

    UFUNCTION(BlueprintPure)
    int32 GetTotalMissionValue() const;

    UFUNCTION(BlueprintPure)
    int32 GetTotalLootBagsInWeight() const;

    UFUNCTION(BlueprintPure)
    int32 GetTotalLootBagsCount() const;

    UFUNCTION(BlueprintPure)
    EIGS_TileEnviroment GetTileEnvironment() const;

    UFUNCTION(BlueprintPure)
    EIGS_SWATVariationType GetSWATVariation() const;

    UFUNCTION(BlueprintPure)
    EIGS_AITiers GetSWATTier() const;

    UFUNCTION(BlueprintPure)
    EIGS_MissionStartupSource GetStartupSource() const;

    UFUNCTION(BlueprintPure)
    EIGS_MusicMissionState GetStartMusic() const;

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetSpecificLootTypes() const;

    UFUNCTION(BlueprintPure)
    FIGS_SpecialLoot GetSpecialLoot() const;

    UFUNCTION(BlueprintPure)
    EIGS_GangsterVariationType GetSecondaryEnemyVariation() const;

    UFUNCTION(BlueprintPure)
    EIGS_ScenarioDifficulty GetScenarioDifficulty() const;

    UFUNCTION(BlueprintPure)
    EMETA_RespectLvl GetRespect() const;

    UFUNCTION(BlueprintPure)
    EIGS_QPModeSource GetQPModeSource() const;

    UFUNCTION(BlueprintPure)
    int32 GetProgressionLevel() const;

    UFUNCTION(BlueprintPure)
    EIGS_GangsterVariationType GetPrimaryEnemyVariation() const;

    UFUNCTION(BlueprintPure)
    EIGS_AITiers GetPrimaryEnemyTier() const;

    UFUNCTION(BlueprintPure)
    int32 GetObjectiveValue() const;

    UFUNCTION(BlueprintPure)
    bool GetNeedObjectiveCompletion() const;

    UFUNCTION(BlueprintPure)
    EIGS_MPLobbyType GetMPLobbyType() const;

    UFUNCTION(BlueprintPure)
    EIGS_HubScenarioType GetMissionType() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetMissionTag() const;

    UFUNCTION(BlueprintPure)
    FString GetMissionSubtype() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetMissionScenario() const;

    UFUNCTION(BlueprintPure)
    FText GetMissionName() const;

    UFUNCTION(BlueprintPure)
    FMETA_FPSBonusesFromMeta GetMetaBonusesData() const;

    UFUNCTION(BlueprintPure)
    EMETA_LobbyVisibilityType GetLobbyVisibility() const;

    UFUNCTION(BlueprintPure)
    EIGS_LightingScenarioType GetLightingScenario() const;

    UFUNCTION(BlueprintPure)
    bool GetIsDebug() const;

    UFUNCTION(BlueprintPure)
    bool GetIsChainMission() const;

    UFUNCTION(BlueprintPure)
    int32 GetIntelLevel() const;

    UFUNCTION(BlueprintPure)
    EIGS_HubBackdropTypes GetHubVariant() const;

    UFUNCTION(BlueprintPure)
    EIGS_HubDistrict GetHubDistrict() const;

    UFUNCTION(BlueprintPure)
    int32 GetHeistersDataNum() const;

    UFUNCTION(BlueprintPure)
    TArray<FCommonHeisterData> GetHeistersData() const;

    UFUNCTION(BlueprintPure)
    EMETA_Heat GetHeat() const;

    UFUNCTION(BlueprintPure)
    FIGS_GameStateData GetGameStateDataDEBUG() const;

    UFUNCTION(BlueprintPure)
    EIGS_FPSDifficulty GetFPSDifficulty() const;

    UFUNCTION(BlueprintPure)
    int32 GetExpectedPlayerCount() const;

    UFUNCTION(BlueprintPure)
    bool GetDownedCharctersSurvive() const;

    UFUNCTION(BlueprintPure)
    FString GetDebugTile() const;

    UFUNCTION(BlueprintPure)
    FString GetDebugPreset() const;

    UFUNCTION(BlueprintPure)
    int32 GetCivilianAmountOverride() const;

    UFUNCTION(BlueprintPure)
    FMETA_ObjectiveTableRow GetBonusObjectiveData() const;

    UFUNCTION(BlueprintPure)
    EIGS_HeistersBackupVariationType GetAllyVariation() const;

    UFUNCTION(BlueprintPure)
    EIGS_AITiers GetAllyTier() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_GameStateDataReadyDelegate OnGameStateDataReady;

    UPROPERTY(BlueprintAssignable)
    FIGS_GameStateDataReadyDelegate OnMissionNameChanged;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsGameStateDataReady;

protected:
    UPROPERTY(ReplicatedUsing=OnRep_GameStateData)
    FIGS_GameStateData GameStateData;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
