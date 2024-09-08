#pragma once
#include "CoreMinimal.h"
#include "IGS_QuickplayMissionNames.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_QuickplayMissionNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> MoneyMaking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Contract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Other;
    
    FIGS_QuickplayMissionNames();
};

