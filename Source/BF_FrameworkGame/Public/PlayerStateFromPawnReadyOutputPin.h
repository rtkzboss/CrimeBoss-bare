#pragma once
#include "CoreMinimal.h"
#include "PlayerStateFromPawnReadyOutputPin.generated.h"

class AIGS_PlayerStateFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateFromPawnReadyOutputPin, AIGS_PlayerStateFramework*, PlayerState);
