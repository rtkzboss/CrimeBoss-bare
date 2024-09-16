#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_ApplyPhysStrengthMultiplyer.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class BF_ANIMATIONS_API UIGS_ApplyPhysStrengthMultiplyer : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UIGS_ApplyPhysStrengthMultiplyer();

    UPROPERTY(EditAnywhere)
    float PhysicsStrengthMultiplyer;

};
