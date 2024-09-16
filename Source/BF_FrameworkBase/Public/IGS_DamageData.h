#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_DamageData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Health;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Shield;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Damage;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_HitInfo HitInfo;

    BF_FRAMEWORKBASE_API FIGS_DamageData();
};
