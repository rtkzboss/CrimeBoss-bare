#pragma once
#include "CoreMinimal.h"
#include "CompilationOptions.generated.h"

USTRUCT()
struct FCompilationOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bTextureCompression;

    UPROPERTY()
    int32 OptimizationLevel;

    UPROPERTY()
    bool bUseParallelCompilation;

    UPROPERTY()
    bool bUseDiskCompilation;

    CUSTOMIZABLEOBJECT_API FCompilationOptions();
};
