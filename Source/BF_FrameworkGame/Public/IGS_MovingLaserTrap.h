#pragma once
#include "CoreMinimal.h"
#include "IGS_TickingLaserTrap.h"
#include "IGS_MovingLaserTrap.generated.h"

class UArrowComponent;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_MovingLaserTrap : public AIGS_TickingLaserTrap {
    GENERATED_BODY()
public:
    AIGS_MovingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void TickTimelineUpdate(float InValue);
    
    UFUNCTION()
    void TickTimelineFinished();
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* ExtraRootObject;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UArrowComponent* RootObjectEnd;
    
};

