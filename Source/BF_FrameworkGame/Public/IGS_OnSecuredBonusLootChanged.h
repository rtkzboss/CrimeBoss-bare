#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSecuredBonusLootChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSecuredBonusLootChanged, float, inSecuredBonusLootValue);
