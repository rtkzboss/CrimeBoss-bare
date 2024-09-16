#pragma once
#include "CoreMinimal.h"
#include "META_HiddenGoalsSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HiddenGoalsSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentValue;

    UPROPERTY(BlueprintReadWrite)
    bool bSuccess;

    UPROPERTY(BlueprintReadWrite)
    bool bRewardReceived;

    FMETA_HiddenGoalsSaveInfo();
};
