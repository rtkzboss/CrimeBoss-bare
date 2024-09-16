#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_TimerTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_TimerTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StartTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Duration;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bPaused;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTimerHandle TimerTaskHandle;

    FIGS_TimerTaskInfo();
};
