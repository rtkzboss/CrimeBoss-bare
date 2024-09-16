#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.h"
#include "IGS_AICopSpecializationHolder.h"
#include "IGS_AICopTiersDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AICopTiersDef : public FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AICopSpecializationHolder Tier1;

    UPROPERTY(EditAnywhere)
    FIGS_AICopSpecializationHolder Tier2;

    UPROPERTY(EditAnywhere)
    FIGS_AICopSpecializationHolder Tier3;

    UPROPERTY(EditAnywhere)
    FIGS_AICopSpecializationHolder Special;

    FIGS_AICopTiersDef();
};
