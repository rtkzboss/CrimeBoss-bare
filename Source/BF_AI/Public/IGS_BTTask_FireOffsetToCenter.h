#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_FireBase.h"
#include "IGS_BTTask_FireOffsetToCenter.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_FireOffsetToCenter : public UIGS_BTTask_FireBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_FireOffsetToCenter();

private:
    UPROPERTY(EditAnywhere)
    float Distance;

    UPROPERTY(EditAnywhere)
    float VerticalAngle;

    UPROPERTY(EditAnywhere)
    float FireTime;

};
