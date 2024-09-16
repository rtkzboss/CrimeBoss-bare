#pragma once
#include "CoreMinimal.h"
#include "IGS_CarExplodedEventSignature.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CarExplodedEventSignature, AActor*, inVehicleCar);
