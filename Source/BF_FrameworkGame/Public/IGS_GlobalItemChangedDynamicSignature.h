#pragma once
#include "CoreMinimal.h"
#include "IGS_GlobalInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemChangedDynamicSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_GlobalItemChangedDynamicSignature, TSubclassOf<UIGS_GlobalInventoryObject>, inItemClass, int32, inCurrentCount);
