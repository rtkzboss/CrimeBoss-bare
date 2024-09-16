#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.h"
#include "IGS_AIGuardSpecializationHolder.h"
#include "IGS_AIGuardTiersDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIGuardTiersDef : public FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AIGuardSpecializationHolder Tier1;

    UPROPERTY(EditAnywhere)
    FIGS_AIGuardSpecializationHolder Tier2;

    UPROPERTY(EditAnywhere)
    FIGS_AIGuardSpecializationHolder Tier3;

    UPROPERTY(EditAnywhere)
    FIGS_AIGuardSpecializationHolder Special;

    FIGS_AIGuardTiersDef();
};
