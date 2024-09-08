#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemDroppedDelegate.generated.h"

class AIGS_PickupActorInventoryItem;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FIGS_ItemDropped, AIGS_PickupActorInventoryItem*, outItem);

