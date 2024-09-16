#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleExitPointFramework.h"
#include "IGS_VehicleExitPoint.generated.h"

class AIGS_TrafficSegment;

UCLASS()
class BF_AI_API AIGS_VehicleExitPoint : public AIGS_VehicleExitPointFramework {
    GENERATED_BODY()
public:
    AIGS_VehicleExitPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditAnywhere)
    uint32 VehicleGroups;

    UPROPERTY(EditAnywhere)
    AIGS_TrafficSegment* PossiblePath;

};
