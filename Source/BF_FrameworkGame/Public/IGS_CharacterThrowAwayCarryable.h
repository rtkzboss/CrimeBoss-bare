#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterThrowAwayCarryable.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CharacterThrowAwayCarryable, TSubclassOf<UIGS_InventoryObjectFramework>, inClass);
