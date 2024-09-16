#pragma once
#include "CoreMinimal.h"
#include "ECustomizableObjectGroupType.h"
#include "EMutableParameterType.h"
#include "IntegerParameterUIData.h"
#include "MutableParamUIMetadata.h"
#include "ParameterUIData.generated.h"

USTRUCT(BlueprintType)
struct FParameterUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;

    UPROPERTY(BlueprintReadWrite)
    FMutableParamUIMetadata ParamUIMetadata;

    UPROPERTY(BlueprintReadWrite)
    EMutableParameterType Type;

    UPROPERTY(BlueprintReadWrite)
    TArray<FIntegerParameterUIData> ArrayIntegerParameterOption;

    UPROPERTY(BlueprintReadWrite)
    ECustomizableObjectGroupType IntegerParameterGroupType;

    UPROPERTY(BlueprintReadWrite)
    bool bDontCompressRuntimeTextures;

    UPROPERTY(BlueprintReadWrite)
    TMap<FString, FString> ForcedParameterValues;

    CUSTOMIZABLEOBJECT_API FParameterUIData();
};
