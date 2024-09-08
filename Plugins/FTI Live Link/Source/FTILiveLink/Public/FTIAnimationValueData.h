#pragma once
#include "CoreMinimal.h"
#include "FTIAnimationValueData.generated.h"

USTRUCT(BlueprintType)
struct FFTIAnimationValueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float browDownLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float browOuterUpLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float browInnerDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float browInnerUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float browDownRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float browOuterUpRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float cheekSquintLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float cheekSquintRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeBlinkLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeWideLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeLookDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeLookLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeLookRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeLookUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeBlinkRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float eyeWideRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float headDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float headLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float headTiltLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float headRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float headTiltRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float headUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float jawLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float jawOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float jawRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthFrownLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthNarrowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthSmileLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthStretchLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthLowerDownLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthLowerDownRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthFunnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthPucker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthFrownRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthNarrowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthSmileRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthStretchRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthUpperUpLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mouthUpperUpRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float noseSneerLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float noseSneerRight;
    
    FTILIVELINK_API FFTIAnimationValueData();
};

