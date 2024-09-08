#pragma once
#include "CoreMinimal.h"
#include "IGS_UsedNumbersHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_UsedNumbersHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<bool> SelectedNumbers;
    
    FIGS_UsedNumbersHolder();
};

