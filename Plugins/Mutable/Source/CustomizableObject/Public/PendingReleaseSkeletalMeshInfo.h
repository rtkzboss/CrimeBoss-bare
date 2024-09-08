#pragma once
#include "CoreMinimal.h"
#include "PendingReleaseSkeletalMeshInfo.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPendingReleaseSkeletalMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY()
    double Timestamp;
    
    CUSTOMIZABLEOBJECT_API FPendingReleaseSkeletalMeshInfo();
};

