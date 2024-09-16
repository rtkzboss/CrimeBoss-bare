#pragma once
#include "CoreMinimal.h"
#include "VehicleStateChanged.generated.h"

class AIGS_VehicleBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleStateChanged, AIGS_VehicleBase*, inInstigator);
