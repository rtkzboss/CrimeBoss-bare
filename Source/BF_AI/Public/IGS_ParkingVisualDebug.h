#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ParkingVisualDebug.generated.h"

UCLASS()
class BF_AI_API AIGS_ParkingVisualDebug : public AActor {
    GENERATED_BODY()
public:
    AIGS_ParkingVisualDebug(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void CheckIfStillValid();

    UPROPERTY(VisibleAnywhere)
    AActor* ParentDestination;

};
