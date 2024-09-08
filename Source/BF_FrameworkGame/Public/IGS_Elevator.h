#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_Elevator.generated.h"

class AIGS_ElevatorEntrance;
class AIGS_Rope;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_Elevator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_ElevatorEntrance*> ElevatorEntrances;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_Rope* ElevatorCable;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 CurrentFloor;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsMoving;
    
public:
    AIGS_Elevator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToFloor(int32 inNextFloor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor();
    
};

