#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MapToTestInfo.generated.h"

USTRUCT(BlueprintType)
struct ST_FRAMEWORK_API FMapToTestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilePath FilePath;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDisabled;

    FMapToTestInfo();
};
