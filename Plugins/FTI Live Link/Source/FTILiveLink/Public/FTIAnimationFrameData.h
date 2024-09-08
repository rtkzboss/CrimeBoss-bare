#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LiveLinkTypes.h"
#include "FTIAnimationValueData.h"
#include "FTIAnimationFrameData.generated.h"

USTRUCT(BlueprintType)
struct FTILIVELINK_API FFTIAnimationFrameData : public FLiveLinkBaseFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFTIAnimationValueData AnimationValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HeadPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat HeadRot;
    
    FFTIAnimationFrameData();
};

