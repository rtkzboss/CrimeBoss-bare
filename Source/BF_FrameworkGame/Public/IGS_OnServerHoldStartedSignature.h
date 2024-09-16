#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerHoldStartedSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnServerHoldStartedSignature, AIGS_GameCharacterFramework*, inInstigator, float, inTimerDuration);
