#pragma once
#include "CoreMinimal.h"
#include "IGS_Range.h"
#include "IGS_RangeWithDistance.generated.h"

USTRUCT()
struct COVERGENERATOR_API FIGS_RangeWithDistance : public FIGS_Range {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float Range;

    UPROPERTY(VisibleAnywhere)
    float Weight;

    FIGS_RangeWithDistance();
};
