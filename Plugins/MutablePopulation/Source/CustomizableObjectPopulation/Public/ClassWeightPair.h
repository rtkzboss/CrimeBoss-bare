#pragma once
#include "CoreMinimal.h"
#include "ClassWeightPair.generated.h"

class UCustomizableObjectPopulationClass;

USTRUCT(BlueprintType)
struct FClassWeightPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCustomizableObjectPopulationClass* Class;
    
    UPROPERTY(EditAnywhere)
    int32 ClassWeight;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FClassWeightPair();
};

