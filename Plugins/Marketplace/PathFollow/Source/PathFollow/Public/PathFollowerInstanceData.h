#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "PathFollowerInstanceData.generated.h"

USTRUCT()
struct FPathFollowerInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    PATHFOLLOW_API FPathFollowerInstanceData();
};
