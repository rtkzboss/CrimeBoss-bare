#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AISwatDefaultTierDef.h"
#include "IGS_AISwatHeavyScoutTierDef.h"
#include "IGS_AISwatHeavyTierDef.h"
#include "IGS_AISwatShieldTierDef.h"
#include "IGS_AISwatSniperTierDef.h"
#include "IGS_AISwatSpecializationHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatDefaultTierDef Default;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatSniperTierDef Sniper;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatShieldTierDef Shield;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatHeavyTierDef Heavy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatHeavyScoutTierDef HeavyScout;
    
    FIGS_AISwatSpecializationHolder();
};

