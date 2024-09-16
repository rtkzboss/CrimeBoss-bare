#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.h"
#include "IGS_AISwatSpecializationHolder.h"
#include "IGS_AISwatTiersDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatTiersDef : public FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatSpecializationHolder Tier1;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatSpecializationHolder Tier2;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatSpecializationHolder Tier3;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatSpecializationHolder Special;

    FIGS_AISwatTiersDef();
};
