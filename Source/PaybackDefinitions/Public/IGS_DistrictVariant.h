#pragma once
#include "CoreMinimal.h"
#include "IGS_DistrictVariant.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_DistrictVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DistrictVariant;

    FIGS_DistrictVariant();
};
