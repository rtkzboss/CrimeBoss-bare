#pragma once
#include "CoreMinimal.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "VehicleOnSpawnGroupUpdated.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleOnSpawnGroupUpdated, EIGS_VehicleSpawnGroup, inSpawnGroup);
