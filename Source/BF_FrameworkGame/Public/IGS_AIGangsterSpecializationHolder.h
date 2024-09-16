#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterVariationType.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AIGangsterDefaultTierDef.h"
#include "IGS_AIGangsterDetectiveTierDef.h"
#include "IGS_AIGangsterHeavyMeleeTierDef.h"
#include "IGS_AIGangsterHeavyTierDef.h"
#include "IGS_AIGangsterShieldTierDef.h"
#include "IGS_AIGangsterSniperTierDef.h"
#include "IGS_AIGangsterTurfwarDefaultTierDef.h"
#include "IGS_AIGangsterSpecializationHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY()
    EIGS_GangsterVariationType Variation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterDefaultTierDef Default;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterSniperTierDef Sniper;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterShieldTierDef Shield;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterHeavyTierDef Heavy;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterDetectiveTierDef Detective;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterTurfwarDefaultTierDef TurfWar;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterHeavyMeleeTierDef HeavyMelee;

    FIGS_AIGangsterSpecializationHolder();
};
