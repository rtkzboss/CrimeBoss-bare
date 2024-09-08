#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientHoldStartedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnClientHoldStartedSignature, AIGS_GameCharacterFramework*, inInstigator, float, inTimerDuration);

