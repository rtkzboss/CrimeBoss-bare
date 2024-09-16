#pragma once
#include "CoreMinimal.h"
#include "PlayerExitVehicleDelegate.generated.h"

class APawn;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerExitVehicleDelegate, APawn*, inPawn, int32, inSeatIndex);
