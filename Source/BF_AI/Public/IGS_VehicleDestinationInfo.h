#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VehicleDestinationInfo.generated.h"

class AIGS_VehicleDestinationArea;
class AIGS_VehicleDestinationPoint;

USTRUCT()
struct BF_AI_API FIGS_VehicleDestinationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Position;

    UPROPERTY()
    int32 Amount;

    UPROPERTY()
    AIGS_VehicleDestinationPoint* DestinationPoint;

    UPROPERTY()
    AIGS_VehicleDestinationArea* DestinationArea;

    FIGS_VehicleDestinationInfo();
};
