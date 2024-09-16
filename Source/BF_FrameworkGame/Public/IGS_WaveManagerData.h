#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_StormType.h"
#include "IGS_StormTypeHolder.h"
#include "IGS_WaveManagerData.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_WaveManagerData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_WaveManagerData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartOnAlarm;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeAfterAlarm;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinControlTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnStopEndAssaultTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAliveEnemiesToStartControl;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FirstSpawnDelayInAssault;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HelicopterCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_StormType, FIGS_StormTypeHolder> StormTypeHolders;

};
