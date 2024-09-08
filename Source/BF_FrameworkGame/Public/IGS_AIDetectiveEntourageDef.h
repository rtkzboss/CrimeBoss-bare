#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "IGS_AIDetectiveEntourageDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIDetectiveEntourageDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(EditDefaultsOnly)
    EIGS_UnitSpecialization Specialization;
    
    FIGS_AIDetectiveEntourageDef();
};

