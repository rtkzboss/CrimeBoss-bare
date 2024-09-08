#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_FloorReachedDelegate.h"
#include "IGS_ElevatorEntrance.generated.h"

class AIGS_Elevator;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ElevatorEntrance : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_Elevator* Elevator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 FloorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OutOfOrder;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_FloorReached OnFloorReached;
    
    AIGS_ElevatorEntrance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FloorReached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableElevatorButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableElevatorButton(bool inIsJammed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor();
    
};

