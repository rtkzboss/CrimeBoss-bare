#pragma once
#include "CoreMinimal.h"
#include "PlayerEnterVehicleDelegateDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerEnterVehicleDelegate, APawn*, inPawn, int32, inSeatIndex);

