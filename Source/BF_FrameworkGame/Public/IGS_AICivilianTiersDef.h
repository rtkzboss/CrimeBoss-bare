#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.h"
#include "IGS_AICivilianSpecializationHolder.h"
#include "IGS_AICivilianTiersDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICivilianTiersDef : public FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICivilianSpecializationHolder Tier1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICivilianSpecializationHolder Tier2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICivilianSpecializationHolder Tier3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICivilianSpecializationHolder Special;
    
    FIGS_AICivilianTiersDef();
};

