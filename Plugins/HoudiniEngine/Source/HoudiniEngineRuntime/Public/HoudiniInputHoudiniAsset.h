#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputHoudiniAsset.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniAsset : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UHoudiniInputHoudiniAsset();

    UPROPERTY()
    int32 AssetOutputIndex;
    
};

