#pragma once
#include "CoreMinimal.h"
#include "IGS_LockPickDifficultySetting.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LockPickDifficultySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseAngleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PinCount;
    
    FIGS_LockPickDifficultySetting();
};

