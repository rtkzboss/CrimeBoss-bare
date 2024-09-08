#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizableObjectPopulationCharacteristic.h"
#include "CustomizableObjectPopulationClass.generated.h"

class UCustomizableObject;

UCLASS()
class CUSTOMIZABLEOBJECTPOPULATION_API UCustomizableObjectPopulationClass : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    UCustomizableObject* CustomizableObject;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> WhiteList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Blacklist;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizableObjectPopulationCharacteristic> Characteristics;
    
    UPROPERTY()
    TArray<FString> Tags;
    
    UCustomizableObjectPopulationClass();

};

