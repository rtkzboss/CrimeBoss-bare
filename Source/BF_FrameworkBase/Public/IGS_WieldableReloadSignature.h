#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableReloadSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_WieldableReloadSignature, bool, inIsCombat, bool, inIsEmptyMagazine);
