#pragma once
#include "CoreMinimal.h"
#include "SpawnerEvent.generated.h"

class AIGS_VehicleSpawner;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerEvent, AIGS_VehicleSpawner*, inSpawner);
