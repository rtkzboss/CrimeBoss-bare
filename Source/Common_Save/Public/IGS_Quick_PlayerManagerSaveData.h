#pragma once
#include "CoreMinimal.h"
#include "IGS_Quick_PlayerManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_PlayerManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 RespectPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int64 TotalScorePoints;

    FIGS_Quick_PlayerManagerSaveData();
};
