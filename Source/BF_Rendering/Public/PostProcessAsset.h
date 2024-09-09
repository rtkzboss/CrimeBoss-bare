#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PostProcessAsset.generated.h"

class UMaterialInstance;

UCLASS(BlueprintType)
class UPostProcessAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPostProcessAsset();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInstance*> PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
};

