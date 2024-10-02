#pragma once
#include "CoreMinimal.h"
#include "EIGS_PushForTarget.h"
#include "IGS_PushForTargetSettingsDef.generated.h"

USTRUCT(BlueprintType)
struct FIGS_PushForTargetSettingsDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TMap<EIGS_PushForTarget, float> CombatRangeReduction;

    UPROPERTY(EditDefaultsOnly)
    EIGS_PushForTarget AfterControlIntensity;

    BF_FRAMEWORKGAME_API FIGS_PushForTargetSettingsDef();
};
