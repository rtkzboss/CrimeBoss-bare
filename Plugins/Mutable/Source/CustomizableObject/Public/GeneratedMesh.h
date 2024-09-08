#pragma once
#include "CoreMinimal.h"
#include "GeneratedMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FGeneratedMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    CUSTOMIZABLEOBJECT_API FGeneratedMesh();
};

