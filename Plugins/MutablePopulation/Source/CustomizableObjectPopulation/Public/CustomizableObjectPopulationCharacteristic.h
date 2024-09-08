#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectPopulationConstraint.h"
#include "CustomizableObjectPopulationCharacteristic.generated.h"

USTRUCT()
struct FCustomizableObjectPopulationCharacteristic {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ParameterName;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizableObjectPopulationConstraint> Constraints;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FCustomizableObjectPopulationCharacteristic();
};

