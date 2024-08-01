#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableLootSpawnedSignature.generated.h"

class AIGS_StaticMeshInventoryItemPickup;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CarryableLootSpawnedSignature, AIGS_StaticMeshInventoryItemPickup*, inLootCollection);