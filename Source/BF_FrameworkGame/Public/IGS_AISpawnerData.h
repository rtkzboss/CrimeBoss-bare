#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Engine/DataAsset.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_SpawnerGameEffectsHolder.h"
#include "IGS_SpawnerNavFiltersHolder.h"
#include "IGS_AISpawnerData.generated.h"

class AAIController;
class AIGS_AISpawnPoint;
class AIGS_AISpawnPointVIP;
class UEnvQuery;
class UIGS_AIDatabaseFPS;
class UIGS_AIDatabaseStory;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AISpawnerData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AISpawnerData();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> GroupEnvironmentQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> SniperGroupEnvironmentQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> GroupAroundActorEnvironmentQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> GuardEnvironmentQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> CivilianEnvironmentQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> CivilianGroupQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIGS_SpawnAnimType, TSoftObjectPtr<UEnvQuery>> EnvironmentQueries;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UEnvQuery> CoverEnvironmentQuery;

    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;

    UPROPERTY(EditAnywhere)
    float HideMeshOnSpawnDuration;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIGS_TeamSideEnum, TSoftClassPtr<AIGS_AISpawnPoint>> SpawnPointsTypes;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_AISpawnPointVIP> VIPSpawnPoint;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AAIController> BotController;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UIGS_AIDatabaseFPS* AIDatabaseFPS;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UIGS_AIDatabaseStory* AIDatabaseStory;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_SpawnerGameEffectsHolder CommonGEs;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_SpawnerNavFiltersHolder CommonNavFilters;

};
