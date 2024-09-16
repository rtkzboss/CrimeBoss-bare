#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AICopDefaultTierDef.h"
#include "IGS_AICopSpecializationHolder.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AICopSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AICopDefaultTierDef Default;

    FIGS_AICopSpecializationHolder();
};
