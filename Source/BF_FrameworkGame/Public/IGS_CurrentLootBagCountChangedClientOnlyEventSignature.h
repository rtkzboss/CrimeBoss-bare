#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.h"
#include "IGS_CurrentLootBagCountChangedClientOnlyEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_CurrentLootBagCountChangedClientOnlyEventSignature, int32, inCount, const TArray<EIGS_BagType>&, inBagTypes, bool, inCausedByItem);
