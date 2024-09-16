#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.h"
#include "IGS_CurrentLootBagCountChangedEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CurrentLootBagCountChangedEventSignature, int32, inCount, const TArray<EIGS_BagType>&, inBagTypes);
