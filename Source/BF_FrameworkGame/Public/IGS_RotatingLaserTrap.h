#pragma once
#include "CoreMinimal.h"
#include "IGS_TickingLaserTrap.h"
#include "IGS_RotatingLaserTrap.generated.h"

class UArrowComponent;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_RotatingLaserTrap : public AIGS_TickingLaserTrap {
    GENERATED_BODY()
public:
    AIGS_RotatingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void TickTimelineUpdate(float InValue);
    
    UFUNCTION()
    void TickTimelineFinished();
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* ExtraRootObject;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UArrowComponent* RotationStartPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UArrowComponent* RotationEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Looping;
    
};

