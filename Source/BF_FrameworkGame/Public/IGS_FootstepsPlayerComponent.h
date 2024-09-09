#pragma once
#include "CoreMinimal.h"
#include "IGS_FootstepsEventBasedComponent.h"
#include "IGS_FootstepsPlayerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FootstepsPlayerComponent : public UIGS_FootstepsEventBasedComponent {
    GENERATED_BODY()
public:
    UIGS_FootstepsPlayerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditAnywhere)
    float TimerPeriod;
    
};

