#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorphTargetVertexData.generated.h"

USTRUCT()
struct FMorphTargetVertexData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector PositionDelta;

    UPROPERTY()
    FVector TangentZDelta;

    UPROPERTY()
    int32 MorphIndex;

    CUSTOMIZABLEOBJECT_API FMorphTargetVertexData();
};
