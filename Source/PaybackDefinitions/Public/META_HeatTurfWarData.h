#pragma once
#include "CoreMinimal.h"
#include "META_HeatTurfWarData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeatTurfWarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CapturingNeutralTurf;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FailedTurfAttackOrDefend;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CapturingFirstTurfInTheSameDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CapturingSecondTurfInTheSameDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CapturingThirdTurfInTheSameDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CapturinFourthTurfInTheSameDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CapturingFifthAndMoreTurfInTheSameDay;

    FMETA_HeatTurfWarData();
};
