#pragma once
#include "CoreMinimal.h"
#include "IGS_Quick_ChainResultsSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainResultsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 HighestStarRating;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 HighScore;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool Completed;

    FIGS_Quick_ChainResultsSaveData();
};
