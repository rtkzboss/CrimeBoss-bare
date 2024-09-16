#pragma once
#include "CoreMinimal.h"
#include "IGS_DangerHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_DangerHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> Danger;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Timestamp;

    BF_AI_API FIGS_DangerHolder();
};
