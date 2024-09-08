#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_TrafficLoopfindingResult.h"
#include "IGS_VehicleLooper.generated.h"

class AIGS_TrafficSegment;
class AIGS_VehicleBase;

UCLASS()
class BF_AI_API AIGS_VehicleLooper : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AIGS_TrafficSegment* InitialTrafficPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_VehicleSplineGroup ForVehicleGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinLoopLenght;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxLoopLenght;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrefferedLoopLenght;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_TrafficLoopfindingResult PossibleLoops;
    
public:
    AIGS_VehicleLooper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLooping(AIGS_VehicleBase* Vehicle);
    
};

