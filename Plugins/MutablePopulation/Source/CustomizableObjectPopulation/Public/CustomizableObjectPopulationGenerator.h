#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizableObjectPopulationGenerator.generated.h"

class UCustomizableObject;

UCLASS()
class CUSTOMIZABLEOBJECTPOPULATION_API UCustomizableObjectPopulationGenerator : public UObject {
    GENERATED_BODY()
public:
    UCustomizableObjectPopulationGenerator();

private:
    UPROPERTY()
    TArray<UCustomizableObject*> PopulationObjects;
    
};

