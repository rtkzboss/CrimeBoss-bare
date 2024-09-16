#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLootCollectionRegistered.generated.h"

class AIGS_LootCollectionBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnLootCollectionRegistered, AIGS_LootCollectionBase*, inLootCollection);
