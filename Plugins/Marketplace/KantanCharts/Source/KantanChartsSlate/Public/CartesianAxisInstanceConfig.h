#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisInstanceConfig.generated.h"

USTRUCT()
struct FCartesianAxisInstanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bShowTitle;
    
    UPROPERTY(EditAnywhere)
    bool bShowMarkers;
    
    UPROPERTY(EditAnywhere)
    bool bShowLabels;
    
    KANTANCHARTSSLATE_API FCartesianAxisInstanceConfig();
};

