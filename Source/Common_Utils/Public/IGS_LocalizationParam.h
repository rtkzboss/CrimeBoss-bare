#pragma once
#include "CoreMinimal.h"
#include "IGS_LocalizationParam.generated.h"

USTRUCT(BlueprintType)
struct COMMON_UTILS_API FIGS_LocalizationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Value;
    
    FIGS_LocalizationParam();
};

