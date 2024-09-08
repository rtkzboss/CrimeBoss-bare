#pragma once
#include "CoreMinimal.h"
#include "PopulationClassParameterOptions.generated.h"

USTRUCT()
struct FPopulationClassParameterOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Tags;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FPopulationClassParameterOptions();
};

