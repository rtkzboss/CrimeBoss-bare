#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainMissionNames.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_ChainMissionNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Chain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Other;
    
    FIGS_ChainMissionNames();
};

