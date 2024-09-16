#pragma once
#include "CoreMinimal.h"
#include "FParameterOptionsTags.h"
#include "ParameterTags.generated.h"

USTRUCT()
struct FParameterTags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Tags;

    UPROPERTY(EditAnywhere)
    TMap<FString, FFParameterOptionsTags> ParameterOptions;

    CUSTOMIZABLEOBJECT_API FParameterTags();
};
