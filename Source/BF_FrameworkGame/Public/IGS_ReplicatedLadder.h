#pragma once
#include "CoreMinimal.h"
#include "IGS_ReplicatedLadder.generated.h"

USTRUCT()
struct FIGS_ReplicatedLadder {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 LadderInputAxis;

    UPROPERTY()
    uint8 LadderInputIsUp: 1;

    UPROPERTY()
    float LadderPosition;

    BF_FRAMEWORKGAME_API FIGS_ReplicatedLadder();
};
