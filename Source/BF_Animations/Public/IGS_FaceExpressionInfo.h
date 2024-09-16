#pragma once
#include "CoreMinimal.h"
#include "IGS_FaceExpressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_FaceExpressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HitDuration;

    UPROPERTY(EditAnywhere)
    float AttackDuration;

    BF_ANIMATIONS_API FIGS_FaceExpressionInfo();
};
