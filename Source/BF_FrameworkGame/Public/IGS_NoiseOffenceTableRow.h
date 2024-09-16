#pragma once
#include "CoreMinimal.h"
#include "IGS_SuspicionDataBase.h"
#include "IGS_NoiseOffenceTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_NoiseOffenceTableRow : public FIGS_SuspicionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NoiseEventTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAddsDetection;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectionAddedMult;

    FIGS_NoiseOffenceTableRow();
};
