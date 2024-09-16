#pragma once
#include "CoreMinimal.h"
#include "EMETA_RespectLvl.h"
#include "META_IntelDataSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_IntelDataSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AmountOfSoldeirsWereSentToIntel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RequiredSoldiersForFullRevealIntel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl RespectValueOnMissionSpawn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntelRewardMultiplier;

    FMETA_IntelDataSave();
};
