#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectBoolParameterValue.h"
#include "CustomizableObjectFloatParameterValue.h"
#include "CustomizableObjectIntParameterValue.h"
#include "CustomizableObjectProjectorParameterValue.h"
#include "CustomizableObjectTextureParameterValue.h"
#include "CustomizableObjectVectorParameterValue.h"
#include "ProfileParameterDat.generated.h"

USTRUCT()
struct FProfileParameterDat {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ProfileName;
    
    UPROPERTY()
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;
    
    UPROPERTY()
    TArray<FCustomizableObjectIntParameterValue> IntParameters;
    
    UPROPERTY()
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;
    
    UPROPERTY()
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;
    
    UPROPERTY()
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;
    
    UPROPERTY()
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;
    
    CUSTOMIZABLEOBJECT_API FProfileParameterDat();
};

