#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_FireBase.h"
#include "IGS_BTTask_BlindFire.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_BlindFire : public UIGS_BTTask_FireBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_BlindFire();

    UPROPERTY(EditDefaultsOnly)
    float Distance;

};
