#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamUnitVariationHolder.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_TeamUnitVariationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 UnitVariation;

    FIGS_TeamUnitVariationHolder();
};
