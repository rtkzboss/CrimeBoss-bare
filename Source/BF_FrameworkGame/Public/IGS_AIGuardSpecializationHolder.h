#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AIGuardDefaultTierDef.h"
#include "IGS_AIGuardSpecializationHolder.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIGuardSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AIGuardDefaultTierDef Default;
    
    FIGS_AIGuardSpecializationHolder();
};

