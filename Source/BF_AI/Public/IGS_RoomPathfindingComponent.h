#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_RoomPathfindingComponent.generated.h"

class AActor;
class AIGS_RoomBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_RoomPathfindingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_RoomPathfindingComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> Path;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_RoomBase*> PathRooms;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* NextBreachPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_RoomBase* DestinationRoom;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_RoomBase* priorRoom;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_RoomBase* NextRoom;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_RoomBase* CurrentRoom;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
};

