#pragma once
#include "CoreMinimal.h"
#include "IGS_FootstepsBaseComponent.h"
#include "IGS_FootstepsDistanceBasedComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FootstepsDistanceBasedComponent : public UIGS_FootstepsBaseComponent {
    GENERATED_BODY()
public:
    UIGS_FootstepsDistanceBasedComponent(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(EditAnywhere)
    float StepLength;

    UPROPERTY(EditAnywhere)
    float CrouchStepLength;

};
