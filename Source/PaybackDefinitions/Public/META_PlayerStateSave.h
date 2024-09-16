#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "META_PlayerStateSave.generated.h"

USTRUCT()
struct PAYBACKDEFINITIONS_API FMETA_PlayerStateSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MoneyAmount;

    UPROPERTY()
    TArray<FSoftObjectPath> Items;

    FMETA_PlayerStateSave();
};
