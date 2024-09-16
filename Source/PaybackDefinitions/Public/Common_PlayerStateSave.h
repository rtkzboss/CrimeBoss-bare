#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Common_PlayerStateSave.generated.h"

USTRUCT()
struct PAYBACKDEFINITIONS_API FCommon_PlayerStateSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MoneyAmount;

    UPROPERTY()
    TArray<FSoftObjectPath> Items;

    FCommon_PlayerStateSave();
};
