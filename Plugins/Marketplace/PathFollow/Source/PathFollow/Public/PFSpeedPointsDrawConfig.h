#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PFSpeedPointsDrawConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFSpeedPointsDrawConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHideSpeedPoints;
    
    UPROPERTY(EditAnywhere)
    bool bHideSpeedPointInfoText;
    
    UPROPERTY(EditAnywhere)
    FColor SpeedPointsColor;
    
    UPROPERTY(EditAnywhere)
    float SpeedPointHitProxySize;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* _SpeedPointSpriteTexture;
    
    UPROPERTY(EditAnywhere)
    bool bVisualizeSpeed;
    
    UPROPERTY(EditAnywhere)
    FLinearColor LowSpeedColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor HighSpeedColor;
    
    FPFSpeedPointsDrawConfig();
};

