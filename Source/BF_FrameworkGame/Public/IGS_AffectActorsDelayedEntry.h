#pragma once
#include "CoreMinimal.h"
#include "IGS_AffectActorsDelayedEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AffectActorsDelayedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;

    FIGS_AffectActorsDelayedEntry();
};
