#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_PressurePhase.h"
#include "EIGS_StormTacticType.h"
#include "EIGS_StormType.h"
#include "IGS_WaveManagerWatcher.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_WaveManagerWatcher : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool StartOnAlarm;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeAfterAlarm;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_PressurePhase CurrentPhase;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_StormTacticType CurrentTactic;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentWaveNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentSquadNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SpawnedTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 AliveTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DeadTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SpawnedInWave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 AliveInWave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DeadInWave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 HeistersTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DeadHeistersTotal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<EIGS_StormType> StormTypes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_StormType CurrentStorm;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MaxEnemyCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StormLength;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BreakLength;
    
public:
    AIGS_WaveManagerWatcher(const FObjectInitializer& ObjectInitializer);

};

