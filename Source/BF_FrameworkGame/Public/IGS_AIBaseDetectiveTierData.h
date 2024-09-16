#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIBaseDetectiveTierData.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIBaseDetectiveTierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval ReviveTimer;

    UPROPERTY(EditAnywhere)
    float DownstateHealth;

    UPROPERTY(EditAnywhere)
    int32 RevivesToRetreat;

    UPROPERTY(EditAnywhere)
    float MaxHealthForReaction;

    UPROPERTY(EditAnywhere)
    float MaxHealthForCover;

    FIGS_AIBaseDetectiveTierData();
};
