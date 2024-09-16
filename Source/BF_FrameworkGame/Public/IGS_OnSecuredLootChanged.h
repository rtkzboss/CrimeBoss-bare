#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSecuredLootChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSecuredLootChanged, float, inSecuredLootValue);
