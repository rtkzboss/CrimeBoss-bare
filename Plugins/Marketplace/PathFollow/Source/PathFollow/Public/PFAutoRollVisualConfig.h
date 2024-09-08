#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFAutoRollVisualConfig.generated.h"

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFAutoRollVisualConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHidePointsVisualization;
    
    UPROPERTY(EditAnywhere)
    bool bHideTextInfo;
    
    UPROPERTY(EditAnywhere)
    float LineLength;
    
    UPROPERTY(EditAnywhere)
    FLinearColor PointColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectedPointColor;
    
    UPROPERTY(EditAnywhere)
    float PointSize;
    
    UPROPERTY(EditAnywhere)
    float LineThickness;
    
    FPFAutoRollVisualConfig();
};

