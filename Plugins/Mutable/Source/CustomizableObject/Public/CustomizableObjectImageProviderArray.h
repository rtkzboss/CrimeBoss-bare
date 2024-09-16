#pragma once
#include "CoreMinimal.h"
#include "CustomizableSystemImageProvider.h"
#include "CustomizableObjectImageProviderArray.generated.h"

class UTexture2D;

UCLASS()
class CUSTOMIZABLEOBJECT_API UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider {
    GENERATED_BODY()
public:
    UCustomizableObjectImageProviderArray();

    UPROPERTY(EditAnywhere)
    TArray<UTexture2D*> Textures;

};
