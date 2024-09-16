#pragma once
#include "CoreMinimal.h"
#include "HoudiniOutputObjectIdentifier.generated.h"

USTRUCT()
struct HOUDINIENGINERUNTIME_API FHoudiniOutputObjectIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ObjectId;

    UPROPERTY()
    int32 GeoId;

    UPROPERTY()
    int32 PartId;

    UPROPERTY()
    FString SplitIdentifier;

    UPROPERTY()
    FString PartName;

    UPROPERTY()
    int32 PrimitiveIndex;

    UPROPERTY()
    int32 PointIndex;

    FHoudiniOutputObjectIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FHoudiniOutputObjectIdentifier&) { return 0; }
FORCEINLINE bool operator==(const FHoudiniOutputObjectIdentifier&, const FHoudiniOutputObjectIdentifier&) { return true; }
