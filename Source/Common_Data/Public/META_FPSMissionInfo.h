#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_Heat.h"
#include "EMETA_StealthMode.h"
#include "Templates/SubclassOf.h"
#include "META_FPSMissionInfo.generated.h"

class UIGS_BaseMissionObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_FPSMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_BaseMissionObject> FPSMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_LightingScenarioType LightingScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubBackdropTypes BackdropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TileEnviroment TileEnviroment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NeedObjectiveCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType PrimaryEnemyVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType SecondaryEnemyVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SWATVariationType SWATVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HeistersBackupVariationType AllyVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceEnemyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers EnemyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceSWATTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers SWATTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceAllyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AITiers AllyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScenarioDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMinimalHeatOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Heat Heat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SupportedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalLootbagCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ForcedDetectivesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_StealthMode StealthMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDownedCharctersSurvive;
    
    FMETA_FPSMissionInfo();
};

