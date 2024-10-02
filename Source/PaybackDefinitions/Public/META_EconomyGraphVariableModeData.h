#pragma once
#include "CoreMinimal.h"
#include "EMETA_EconomyGraphVariableMode.h"
#include "META_EconomyGraphVariableModeData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_EconomyGraphVariableModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_EconomyGraphVariableMode VariableMode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AbsoluteValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Multiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldScaleWithDifficulty;

    FMETA_EconomyGraphVariableModeData();
};
