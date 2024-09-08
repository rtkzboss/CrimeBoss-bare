#pragma once
#include "CoreMinimal.h"
#include "PopulationClassParameterOptions.h"
#include "PopulationClassParameter.generated.h"

USTRUCT()
struct FPopulationClassParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Tags;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FPopulationClassParameterOptions> ParameterOptions;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FPopulationClassParameter();
};

