#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_AIBaseDisabledSpecializations.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBaseDisabledSpecializations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<EIGS_UnitSpecialization> Gangster;
    
    FIGS_AIBaseDisabledSpecializations();
};

