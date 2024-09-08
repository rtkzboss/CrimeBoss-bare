#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizableObjectMeshToMeshVertData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectMeshToMeshVertData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector4 PositionBaryCoordsAndDist;
    
    UPROPERTY()
    FVector4 NormalBaryCoordsAndDist;
    
    UPROPERTY()
    FVector4 TangentBaryCoordsAndDist;
    
    UPROPERTY()
    uint16 SourceMeshVertIndices[4];
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    int16 SourceAssetIndex;
    
    UPROPERTY()
    int16 SourceAssetLodIndex;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectMeshToMeshVertData();
};

