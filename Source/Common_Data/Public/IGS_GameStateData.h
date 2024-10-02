#pragma once
#include "CoreMinimal.h"
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
#include "IGS_SpecialLoot.h"
#include "META_FPSBonusesFromMeta.h"
#include "IGS_GameStateData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GameStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FCommonHeisterData> Heisters;

    UPROPERTY(BlueprintReadWrite)
    EIGS_MissionStartupSource StartupSource;

    UPROPERTY(BlueprintReadWrite)
    FString MissionSubtype;

    UPROPERTY(BlueprintReadWrite)
    EIGS_QPModeSource QPModeSource;

    UPROPERTY(BlueprintReadWrite)
    EIGS_MPLobbyType MPLobbyType;

    UPROPERTY(BlueprintReadWrite)
    EMETA_LobbyVisibilityType LobbyVisibility;

    UPROPERTY(BlueprintReadWrite)
    FGameplayTag MissionTag;

    UPROPERTY(BlueprintReadWrite)
    FGameplayTag MissionScenario;

    UPROPERTY(BlueprintReadWrite)
    EIGS_HubScenarioType HubScenarioType;

    UPROPERTY(BlueprintReadWrite)
    EIGS_TileEnviroment TileEnvironment;

    UPROPERTY(BlueprintReadWrite)
    EIGS_HubDistrict HubDistrict;

    UPROPERTY(BlueprintReadWrite)
    EIGS_HubBackdropTypes HubVariant;

    UPROPERTY(BlueprintReadWrite)
    EIGS_LightingScenarioType LightingScenario;

    UPROPERTY(BlueprintReadWrite)
    EMETA_Heat Heat;

    UPROPERTY(BlueprintReadWrite)
    int32 WantedBadges;

    UPROPERTY(BlueprintReadWrite)
    EIGS_UserDifficulty UserDifficulty;

    UPROPERTY(BlueprintReadWrite)
    EIGS_ScenarioDifficulty ScenarioDifficulty;

    UPROPERTY(BlueprintReadWrite)
    EIGS_FPSDifficulty FPSDifficulty;

    UPROPERTY(BlueprintReadWrite)
    EIGS_MusicMissionState StartMusic;

    UPROPERTY(BlueprintReadWrite)
    EIGS_GangsterVariationType PrimaryEnemyVariation;

    UPROPERTY(BlueprintReadWrite)
    EIGS_AITiers PrimaryEnemyTier;

    UPROPERTY(BlueprintReadWrite)
    EIGS_GangsterVariationType SecondaryEnemyVariation;

    UPROPERTY(BlueprintReadWrite)
    EIGS_AITiers SecondaryEnemyTier;

    UPROPERTY(BlueprintReadWrite)
    EIGS_SWATVariationType SWATVariation;

    UPROPERTY(BlueprintReadWrite)
    EIGS_AITiers SWATTier;

    UPROPERTY(BlueprintReadWrite)
    EIGS_HeistersBackupVariationType AllyVariation;

    UPROPERTY(BlueprintReadWrite)
    EIGS_AITiers AllyTier;

    UPROPERTY(BlueprintReadWrite)
    FMETA_ObjectiveTableRow BonusObjectiveData;

    UPROPERTY(BlueprintReadWrite)
    FMETA_FPSBonusesFromMeta MetaBonuses;

    UPROPERTY(BlueprintReadWrite)
    int32 IntelLevel;

    UPROPERTY()
    int32 ExpectedPlayerCount;

    UPROPERTY()
    FText MissionName;

    UPROPERTY()
    int32 TotalMissionValue;

    UPROPERTY()
    int32 ObjectiveValue;

    UPROPERTY(BlueprintReadWrite)
    bool SupportsCleanExecution;

    UPROPERTY()
    int32 TotalLootbagCount;

    UPROPERTY()
    FGameplayTagContainer SpecificLootTypes;

    UPROPERTY(BlueprintReadWrite)
    FIGS_SpecialLoot SpecialLoot;

    UPROPERTY()
    EMETA_RespectLvl Respect;

    UPROPERTY()
    int32 ProgressionLevel;

    UPROPERTY()
    bool IsChainMission;

    UPROPERTY()
    bool bIsInited;

    UPROPERTY()
    bool bDataMarkedFinal;

    UPROPERTY(BlueprintReadWrite)
    bool NeedObjectiveCompletion;

    UPROPERTY(BlueprintReadWrite)
    bool bDownedCharctersSurvive;

    UPROPERTY(BlueprintReadWrite)
    bool bIsDEBUG;

    UPROPERTY(BlueprintReadWrite)
    FString DebugTile;

    UPROPERTY(BlueprintReadWrite)
    FString DebugPreset;

    UPROPERTY(BlueprintReadWrite)
    int32 CiviliansAmountOverride;

    FIGS_GameStateData();
};
