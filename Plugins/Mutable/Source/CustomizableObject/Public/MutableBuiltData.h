#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MutableBuiltData.generated.h"

USTRUCT()
struct FMutableBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid CompilationId;

    UPROPERTY()
    int32 SupportedVersion;

    CUSTOMIZABLEOBJECT_API FMutableBuiltData();
};
