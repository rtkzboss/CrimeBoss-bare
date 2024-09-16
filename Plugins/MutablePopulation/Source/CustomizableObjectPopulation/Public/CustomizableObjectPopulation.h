#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ClassWeightPair.h"
#include "CustomizableObjectPopulation.generated.h"

class UCustomizableObjectInstance;
class UCustomizableObjectPopulationGenerator;

UCLASS(BlueprintType)
class CUSTOMIZABLEOBJECTPOPULATION_API UCustomizableObjectPopulation : public UObject {
    GENERATED_BODY()
public:
    UCustomizableObjectPopulation();

    UFUNCTION(BlueprintPure)
    void RegeneratePopulation(int32 Seed, TArray<UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate) const;

    UFUNCTION(BlueprintPure)
    int32 GeneratePopulation(TArray<UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate) const;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;

    UPROPERTY(EditAnywhere)
    TArray<FClassWeightPair> ClassWeights;

private:
    UPROPERTY()
    UCustomizableObjectPopulationGenerator* Generator;

};
