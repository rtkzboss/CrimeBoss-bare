#pragma once
#include "CoreMinimal.h"
#include "IGS_GlobalInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemChangedDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FIGS_GlobalItemChangedDelegate, TSubclassOf<UIGS_GlobalInventoryObject>, inItemClass, int32, inCurrentCount);
