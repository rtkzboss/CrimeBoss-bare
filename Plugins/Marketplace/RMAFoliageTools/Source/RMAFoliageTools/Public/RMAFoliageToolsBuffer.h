#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RMAFoliageToolsBuffer.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct RMAFOLIAGETOOLS_API FRMAFoliageToolsBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UStaticMesh*> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> Class;
    
    FRMAFoliageToolsBuffer();
};

