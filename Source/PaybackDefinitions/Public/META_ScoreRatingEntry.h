#pragma once
#include "CoreMinimal.h"
#include "META_ScoreRatingEntry.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ScoreRatingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredScore;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText RatingLabel;

    FMETA_ScoreRatingEntry();
};
