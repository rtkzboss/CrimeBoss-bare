#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffect.h"
#include "EIGS_UserDifficulty.h"
#include "META_BaseMissionSave.h"
#include "Templates/SubclassOf.h"
#include "META_HordeModeMissionSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HordeModeMissionSave : public FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime DateTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UGameplayEffect>, float> PerkUpgrades;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KillsCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CompletedWave;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxWaveCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Money;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeisterMoney;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayersCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UserDifficulty UserDifficulty;

    FMETA_HordeModeMissionSave();
};
