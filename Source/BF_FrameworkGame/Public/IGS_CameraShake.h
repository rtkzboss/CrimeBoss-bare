#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_CameraShake.generated.h"

USTRUCT(BlueprintType)
struct FIGS_CameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CameraShakeTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;

    BF_FRAMEWORKGAME_API FIGS_CameraShake();
};
