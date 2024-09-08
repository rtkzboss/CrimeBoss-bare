#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LaserTrapTriggeredEventDelegate.h"
#include "IGS_LaserTrapManager.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LaserTrapManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_LaserTrapTriggeredEvent OnLaserTriggeredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStimuliForAI;
    
public:
    AIGS_LaserTrapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLasersEnabled(bool inState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaserTriggered();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetLaserState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsStimuliForAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeleteObstacle() const;
    
};

