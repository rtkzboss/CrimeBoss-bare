#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AIEmployeeDefaultTierDef.h"
#include "IGS_AIEmployeeSpecializationHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIEmployeeSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AIEmployeeDefaultTierDef Default;
    
    FIGS_AIEmployeeSpecializationHolder();
};

