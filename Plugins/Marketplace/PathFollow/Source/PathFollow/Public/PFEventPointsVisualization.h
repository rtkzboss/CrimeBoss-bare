#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFEventPointsVisualization.generated.h"

class UTexture2D;

USTRUCT()
struct PATHFOLLOW_API FPFEventPointsVisualization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHideEventPoints;
    
    UPROPERTY(EditAnywhere)
    bool bHideEventPointInfoText;
    
    UPROPERTY(EditAnywhere)
    FColor EventPointsColor;
    
    UPROPERTY(EditAnywhere)
    float EventPointHitProxySize;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* _EventPointSpriteTexture;
    
    FPFEventPointsVisualization();
};

