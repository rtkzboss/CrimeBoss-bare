#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_TileManagerDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_TileManagerDatabaseRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasSunsetLightScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SunsetLightScenarioLoadDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasDuskLightScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DuskLightScenarioLoadDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfExternalConnectionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfNavMeshBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ParentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> Scenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfPlayerSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfBpRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfHelicopers;
    
    FIGS_TileManagerDatabaseRow();
};

