#pragma once
#include "CoreMinimal.h"
#include "FParameterOptionsTags.generated.h"

USTRUCT()
struct FFParameterOptionsTags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Tags;

    CUSTOMIZABLEOBJECT_API FFParameterOptionsTags();
};
