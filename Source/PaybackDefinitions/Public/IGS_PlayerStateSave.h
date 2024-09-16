#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PlayerStateSave.generated.h"

USTRUCT()
struct PAYBACKDEFINITIONS_API FIGS_PlayerStateSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MoneyAmount;

    UPROPERTY()
    TArray<FSoftObjectPath> Items;

    FIGS_PlayerStateSave();
};
