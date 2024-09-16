#pragma once
#include "CoreMinimal.h"
#include "IGS_AccountSaveDataRequestedDelegate.generated.h"

class UIGS_PaybackSaveGameAccount;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AccountSaveDataRequestedDelegate, UIGS_PaybackSaveGameAccount*, AccountSaveGame);
