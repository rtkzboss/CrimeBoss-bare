#pragma once
#include "CoreMinimal.h"
#include "IGS_PickupThrownSignature.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PickupThrownSignature, AActor*, inPickup);
