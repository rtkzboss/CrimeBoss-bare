#pragma once
#include "CoreMinimal.h"
#include "MorphTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 LodNum;
    
    CUSTOMIZABLEOBJECT_API FMorphTargetInfo();
};

