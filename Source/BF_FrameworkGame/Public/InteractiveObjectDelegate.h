#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "EIGS_InteractionType.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObjectDelegate.generated.h"

class UIGS_InteractiveComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInteractiveObjectDelegate, bool, inIsNear, EIGS_InteractionType, inInteractionType, UIGS_InteractiveComponent*, inInteractiveComponent, TSubclassOf<UIGS_InventoryObjectFramework>, inNeededItem);
