#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PrefabricatorComponentData.h"
#include "PrefabricatorActorData.generated.h"

class UPrefabricatorProperty;

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabricatorActorData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PrefabItemID;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    UPROPERTY()
    FString ClassPath;
    
    UPROPERTY()
    FSoftClassPath ClassPathRef;
    
    UPROPERTY()
    TArray<UPrefabricatorProperty*> Properties;
    
    UPROPERTY()
    TArray<FPrefabricatorComponentData> Components;
    
    FPrefabricatorActorData();
};

