#pragma once
#include "CoreMinimal.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_QPModeSource.h"
#include "IGS_SpecialLoot.h"
#include "META_FPSBonusesFromMeta.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_ChainType.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_Heat.h"
#include "EMETA_RespectLvl.h"
#include "IGS_MetaTransferDataBase.h"
#include "IGS_Meta2FPS_Data.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Meta2FPS_Data : public FIGS_MetaTransferDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MissionTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MapName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MissionScenario;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TileEnviroment TileEnvironment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubDistrict HubDistrict;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubBackdropTypes HubVariant;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_LightingScenarioType LightingScenario;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScenarioDifficulty ScenarioDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_FPSDifficulty FPSDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Heat Heat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WantedBadges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntelLevel;

    UPROPERTY(BlueprintReadWrite)
    FGameplayTag BonusObjectiveID;

    UPROPERTY(BlueprintReadWrite)
    bool SupportsCleanExecution;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MusicMissionState StartMusic;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MissionStartupSource StartupSource;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MissionSubtype;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_QPModeSource QPModeSource;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText MissionName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ObjectiveValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalMissionValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalLootbagCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SpecificLootTypes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_SpecialLoot SpecialLoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl Respect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsChainMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ChainType ChainType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType PrimaryEnemyVariation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers PrimaryEnemyTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType SecondaryEnemyVariation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers SecondaryEnemyTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SWATVariationType SWATVariation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers SWATTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HeistersBackupVariationType AllyVariation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers AllyTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExpectedPlayerCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FPSBonusesFromMeta MetaBonuses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ObjectivePercentage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NeedObjectiveCompletion;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDownedCharctersSurvive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CiviliansAmountOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDEBUG;

    FIGS_Meta2FPS_Data();
};
