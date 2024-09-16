#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SearchRotate.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SearchRotate : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SearchRotate();

    UPROPERTY(EditAnywhere)
    bool bKeepFacingForward;

    UPROPERTY(EditAnywhere)
    FVector TracePointOffset;

    UPROPERTY(EditAnywhere)
    float ThreatPointLookAtTime;

    UPROPERTY(EditAnywhere)
    float ThreatPointLookAtTimeDeviation;

    UPROPERTY(EditAnywhere)
    float HighPrioThreatPointLookAtTime;

    UPROPERTY(EditAnywhere)
    float HighPrioThreatPointLookAtTimeDeviation;

    UPROPERTY(EditAnywhere)
    float ForwardLookAtTime;

    UPROPERTY(EditAnywhere)
    float ForwardLookAtTimeDeviation;

    UPROPERTY(EditAnywhere)
    float ThreatPointMaxAngle;

    UPROPERTY(EditAnywhere)
    float HighPrioThreatPointMaxAngle;

    UPROPERTY(EditAnywhere)
    float HighPrioThreatPointRotateAngle;

};
