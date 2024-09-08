#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#include "IGS_BTTask_ComplexRotateToFaceBBEntry.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_ComplexRotateToFaceBBEntry : public UBTTask_RotateToFaceBBEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RandomAngle;
    
    UPROPERTY(EditAnywhere)
    float ForceRotationByAngle;
    
    UPROPERTY(EditAnywhere)
    bool PredictActorLocation;
    
    UPROPERTY(EditAnywhere)
    float PredictionTimePerMeter;
    
    UIGS_BTTask_ComplexRotateToFaceBBEntry();

};

