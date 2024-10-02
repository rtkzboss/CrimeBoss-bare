#pragma once
#include "CoreMinimal.h"
#include "IGS_EventDate.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_EventDate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Day;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Month;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Year;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Hours;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Minutes;

    FIGS_EventDate();
};
