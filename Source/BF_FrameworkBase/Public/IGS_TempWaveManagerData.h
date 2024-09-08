#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_WaveHolder.h"
#include "IGS_TempWaveManagerData.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_TempWaveManagerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AssaultTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ControlTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuildUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartOnAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeAfterAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBetweenWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IncrementPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSquadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IncreasingWaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalLimitThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LargeGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_WaveHolder> WaveHolders;
    
    UIGS_TempWaveManagerData();

};

