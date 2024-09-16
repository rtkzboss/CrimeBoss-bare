#pragma once
#include "CoreMinimal.h"
#include "MorphTargetInfo.generated.h"

USTRUCT()
struct FMorphTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;

    UPROPERTY()
    int32 LodNum;

    CUSTOMIZABLEOBJECT_API FMorphTargetInfo();
};
