#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_UsingCrewInGraph.h"
#include "META_FinishedMissionInfo.h"
#include "META_JobParameters.h"
#include "META_MissionsSave.h"
#include "META_PlayedPresets.h"
#include "Templates/SubclassOf.h"
#include "META_JobManagerSaveData.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_JobManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UMETA_MissionID> CurrentJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag CurrentJobTileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_MissionsSave JobsOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_JobParameters> JobParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 JobsCompletedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UMETA_MissionID>, int32> JobsSpawnDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bWasPlayerTransferredToFPSSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_FinishedMissionInfo> FinishedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_UsingCrewInGraph bUsingTemporaryCrewAfterFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, FMETA_PlayedPresets> RecentlyPlayedPresetsPerScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> RecentlyPlayedJobData;
    
    FMETA_JobManagerSaveData();
};

