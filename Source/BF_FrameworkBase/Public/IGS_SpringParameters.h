#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SpringParameters.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_SpringParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Stiffness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Damping;
    
    FIGS_SpringParameters();
};

