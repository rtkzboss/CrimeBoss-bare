#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnSecuredLootAdded.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSecuredLootAdded, TSubclassOf<UIGS_InventoryObjectFramework>, inInventoryObject);
