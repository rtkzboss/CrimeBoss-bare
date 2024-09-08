#pragma once
#include "CoreMinimal.h"
#include "IGS_ProgressionResult.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_ProgressionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LevelsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointsAdded;
    
    FIGS_ProgressionResult();
};

