#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MapToTestInfo.generated.h"

USTRUCT(BlueprintType)
struct ST_FRAMEWORK_API FMapToTestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    FMapToTestInfo();
};

