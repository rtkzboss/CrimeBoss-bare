#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutputObject.h"
#include "HoudiniBakedOutputObjectIdentifier.h"
#include "HoudiniBakedOutput.generated.h"

USTRUCT()
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects;

    FHoudiniBakedOutput();
};
