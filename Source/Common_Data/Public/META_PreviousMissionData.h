#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_LightingScenarioType.h"
#include "EMETA_JobResult.h"
#include "Templates/SubclassOf.h"
#include "META_PreviousMissionData.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_PreviousMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_JobResult MissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> CollectedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MoneyCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CivilCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PoliceCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SwatCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GangsterCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemiesRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BackupHeistersCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlarmTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WantedStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BagsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_LightingScenarioType LightingScenarioType;
    
    FMETA_PreviousMissionData();
};

