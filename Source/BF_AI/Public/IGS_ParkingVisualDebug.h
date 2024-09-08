#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ParkingVisualDebug.generated.h"

UCLASS()
class BF_AI_API AIGS_ParkingVisualDebug : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AActor* ParentDestination;
    
    AIGS_ParkingVisualDebug(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void CheckIfStillValid();
    
};

