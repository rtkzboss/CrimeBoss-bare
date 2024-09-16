#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeValues.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HordeModeValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalValue;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentProgress;

    BF_FRAMEWORKGAME_API FIGS_HordeModeValues();
};
