#pragma once
#include "CoreMinimal.h"
#include "IGS_FootstepsBaseComponent.h"
#include "IGS_FootstepsDistanceBasedComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FootstepsDistanceBasedComponent : public UIGS_FootstepsBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float StepLength;
    
    UPROPERTY(EditAnywhere)
    float CrouchStepLength;
    
public:
    UIGS_FootstepsDistanceBasedComponent(const FObjectInitializer& ObjectInitializer);

};

