#pragma once
#include "CoreMinimal.h"
#include "BrokenStage.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBrokenStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealthPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* Mesh;
    
    BF_FRAMEWORKGAME_API FBrokenStage();
};

