#pragma once
#include "CoreMinimal.h"
#include "VehicleOnDespawn.generated.h"

class AIGS_VehicleBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleOnDespawn, AIGS_VehicleBase*, inInstigator);
