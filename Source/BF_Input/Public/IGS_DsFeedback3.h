#pragma once
#include "CoreMinimal.h"
#include "IGS_DsFeedback3.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsFeedback3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 StartPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 EndPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 StartStrength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 EndStrength;

    BF_INPUT_API FIGS_DsFeedback3();
};
