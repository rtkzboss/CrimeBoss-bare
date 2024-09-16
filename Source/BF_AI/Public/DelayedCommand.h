#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DelayedCommand.generated.h"

class UIGS_AICommand;

USTRUCT()
struct FDelayedCommand {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTimerHandle Timer;

    UPROPERTY()
    UIGS_AICommand* AICommand;

    BF_AI_API FDelayedCommand();
};
