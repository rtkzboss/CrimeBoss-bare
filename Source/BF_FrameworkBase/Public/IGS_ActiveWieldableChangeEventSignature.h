#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_ActiveWieldableChangeEventSignature.generated.h"

class AIGS_WieldableBase;
class UIGS_WieldableInventoryObjectBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_ActiveWieldableChangeEventSignature, EIGS_WieldableSlot, SlotType, AIGS_WieldableBase*, WieldableBase, UIGS_WieldableInventoryObjectBase*, InventoryObject);
