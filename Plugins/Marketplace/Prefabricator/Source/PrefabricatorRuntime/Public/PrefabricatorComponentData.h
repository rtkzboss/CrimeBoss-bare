#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrefabricatorComponentData.generated.h"

class UPrefabricatorProperty;

USTRUCT()
struct PREFABRICATORRUNTIME_API FPrefabricatorComponentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform RelativeTransform;

    UPROPERTY()
    FString ComponentName;

    UPROPERTY()
    TArray<UPrefabricatorProperty*> Properties;

    FPrefabricatorComponentData();
};
