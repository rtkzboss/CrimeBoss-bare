#pragma once
#include "CoreMinimal.h"
#include "VehiclePassengersSpawned.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehiclePassengersSpawned, const TArray<AIGS_GameCharacterFramework*>&, inPassengers);
