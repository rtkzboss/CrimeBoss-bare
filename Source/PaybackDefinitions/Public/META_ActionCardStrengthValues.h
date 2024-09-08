#pragma once
#include "CoreMinimal.h"
#include "META_ActionCardStrengthValues.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ActionCardStrengthValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNeedOverrideTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText NewTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> Values;
    
    FMETA_ActionCardStrengthValues();
};

