#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLootBagCountChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnLootBagCountChanged, int32, inCount);

