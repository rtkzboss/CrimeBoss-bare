#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 TierSelection;

    FIGS_AIBaseTiersDef();
};
