#pragma once
#include "CoreMinimal.h"
#include "EMutableParameterType.h"
#include "MutableModelParameterValue.h"
#include "MutableParamUIMetadata.h"
#include "MutableModelParameterProperties.generated.h"

USTRUCT()
struct FMutableModelParameterProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    EMutableParameterType Type;
    
    UPROPERTY()
    int32 ImageDescriptionCount;
    
    UPROPERTY()
    TArray<FMutableModelParameterValue> PossibleValues;
    
    UPROPERTY()
    FMutableParamUIMetadata ParamUIMetadata;
    
    CUSTOMIZABLEOBJECT_API FMutableModelParameterProperties();
};

