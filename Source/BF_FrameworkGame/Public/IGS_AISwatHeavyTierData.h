#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseHeavyTierData.h"
#include "IGS_SwatHeavyInjuredSettings.h"
#include "IGS_SwatHeavyShockSettings.h"
#include "IGS_SwatHeavyWeakSpotSettings.h"
#include "IGS_AISwatHeavyTierData.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AISwatHeavyTierData : public FIGS_AIBaseHeavyTierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_SwatHeavyShockSettings Shock;

    UPROPERTY(EditAnywhere)
    FIGS_SwatHeavyWeakSpotSettings WeakSpot;

    UPROPERTY(EditAnywhere)
    FIGS_SwatHeavyInjuredSettings Injured;

    FIGS_AISwatHeavyTierData();
};
