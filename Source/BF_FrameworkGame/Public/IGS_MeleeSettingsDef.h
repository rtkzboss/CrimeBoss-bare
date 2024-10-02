#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_MeleeSettingsDef.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MeleeSettingsDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval DelayBeforeFirstStrike;

    BF_FRAMEWORKGAME_API FIGS_MeleeSettingsDef();
};
