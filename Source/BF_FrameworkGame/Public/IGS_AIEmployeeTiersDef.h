#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.h"
#include "IGS_AIEmployeeSpecializationHolder.h"
#include "IGS_AIEmployeeTiersDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIEmployeeTiersDef : public FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AIEmployeeSpecializationHolder Tier1;

    UPROPERTY(EditAnywhere)
    FIGS_AIEmployeeSpecializationHolder Tier2;

    UPROPERTY(EditAnywhere)
    FIGS_AIEmployeeSpecializationHolder Tier3;

    UPROPERTY(EditAnywhere)
    FIGS_AIEmployeeSpecializationHolder Special;

    FIGS_AIEmployeeTiersDef();
};
