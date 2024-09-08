#pragma once
#include "CoreMinimal.h"
#include "PlayerStateReadyOutputPinDelegate.generated.h"

class AIGS_PlayerStateFramework;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateReadyOutputPin, AIGS_PlayerStateFramework*, PlayerState);

