#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnSplineCompletedEventDelegate.h"
#include "IGS_BossPointMovementManager.generated.h"

class AIGS_PlayerCharacter;
class UIGS_PlayerCharacterMovementComponent;
class USplineComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_BossPointMovementManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_PlayerCharacter* MovingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_PlayerCharacterMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSplineCompletedEvent OnSplineCompletedEvent;
    
    AIGS_BossPointMovementManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResumeMoving();
    
    UFUNCTION(BlueprintCallable)
    void PauseMoving();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithPlayer(AIGS_PlayerCharacter* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AbortMoving();
    
};

