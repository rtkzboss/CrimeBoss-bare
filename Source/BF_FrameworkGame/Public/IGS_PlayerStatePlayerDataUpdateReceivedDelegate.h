#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerStatePlayerDataUpdateReceivedDelegate.generated.h"

class APlayerState;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerStatePlayerDataUpdateReceivedDelegate, APlayerState*, inPlayerState);
