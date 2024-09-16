#pragma once
#include "CoreMinimal.h"
#include "IGS_LootSpawnedSignature.generated.h"

class AIGS_LootCollectionBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootSpawnedSignature, AIGS_LootCollectionBase*, inLootCollection);
