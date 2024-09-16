#pragma once
#include "CoreMinimal.h"
#include "IGS_QuickplaySaveDataRequestedDelegate.generated.h"

class UIGS_PaybackSaveGameQuickplay;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_QuickplaySaveDataRequestedDelegate, UIGS_PaybackSaveGameQuickplay*, QuickplaySaveGame);
