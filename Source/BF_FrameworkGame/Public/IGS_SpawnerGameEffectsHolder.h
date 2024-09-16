#pragma once
#include "CoreMinimal.h"
#include "IGS_SpawnerGameEffectsHolder.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FIGS_SpawnerGameEffectsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> AIBaseUnitMultipliersGE;

    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> AISpreadIncreasedGE;

    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> FlashedGE;

    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> StunnedGE;

    BF_FRAMEWORKGAME_API FIGS_SpawnerGameEffectsHolder();
};
