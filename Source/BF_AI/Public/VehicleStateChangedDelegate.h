#pragma once
#include "CoreMinimal.h"
#include "VehicleStateChangedDelegate.generated.h"

class AIGS_VehicleBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleStateChanged, AIGS_VehicleBase*, inInstigator);

