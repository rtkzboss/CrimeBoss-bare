#pragma once
#include "CoreMinimal.h"
#include "MutableParamUIMetadata.h"
#include "IntegerParameterUIData.generated.h"

USTRUCT(BlueprintType)
struct FIntegerParameterUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    FMutableParamUIMetadata ParamUIMetadata;
    
    CUSTOMIZABLEOBJECT_API FIntegerParameterUIData();
};

