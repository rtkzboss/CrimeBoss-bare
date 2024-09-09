#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_DoorBreachInterface.h"
#include "IGS_BreachableWall.generated.h"

class AIGS_RoomBase;
class UBoxComponent;
class UChildActorComponent;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_BreachableWall : public AActor, public IIGS_DoorBreachInterface {
    GENERATED_BODY()
public:
    AIGS_BreachableWall(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* WallRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UChildActorComponent* FrontBreachingPoints;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UChildActorComponent* BackBreachingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_RoomBase* OwningRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsBreached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* NavigationBlock;
    

    // Fix for true pure virtual functions not being implemented
};

