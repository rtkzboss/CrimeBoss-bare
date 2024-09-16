#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIBaseHeavyTierData.h"
#include "IGS_AIGangsterHeavyTierData.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterHeavyTierData : public FIGS_AIBaseHeavyTierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WeakspotExplosionDamage;

    UPROPERTY(EditAnywhere)
    float InitialSpreadMultiplier;

    UPROPERTY(EditAnywhere)
    float SpreadDuration;

    UPROPERTY(EditAnywhere)
    FFloatInterval TimeTillOverheat;

    FIGS_AIGangsterHeavyTierData();
};
