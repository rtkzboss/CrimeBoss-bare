#pragma once
#include "CoreMinimal.h"
#include "IGS_HitSoundParameters.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_HitSoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseThis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Velocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Instigator;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cooldown;

    FIGS_HitSoundParameters();
};
