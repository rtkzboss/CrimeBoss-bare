#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SwatHeavyWeakSpotSettings.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_SwatHeavyWeakSpotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WeakSpotHealth;

    UPROPERTY(EditAnywhere)
    FFloatInterval DoomTimer;

    FIGS_SwatHeavyWeakSpotSettings();
};
