#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PlayerBotSettings.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_PlayerBotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval CombatRange;

    UPROPERTY(EditAnywhere)
    FInt32Interval ShotsToFire;

    UPROPERTY(EditAnywhere)
    FInt32Interval ShotsToFireSpray;

    UPROPERTY(EditAnywhere)
    FInt32Interval AmmoUsedUntilReload;

    UPROPERTY(EditAnywhere)
    FFloatInterval AffterFireCooldown;

    UPROPERTY(EditAnywhere)
    FFloatInterval AffterFireCooldownCover;

    UPROPERTY(EditDefaultsOnly)
    float CoverStickiness;

    UPROPERTY(EditAnywhere)
    float ReactionIntensity;

    FIGS_PlayerBotSettings();
};
