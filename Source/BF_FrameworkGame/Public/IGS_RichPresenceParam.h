#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_RichPresenceParam.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RichPresenceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 Int;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Float;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Text;

    BF_FRAMEWORKGAME_API FIGS_RichPresenceParam();
};
