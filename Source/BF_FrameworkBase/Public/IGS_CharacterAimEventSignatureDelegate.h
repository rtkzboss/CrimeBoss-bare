#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterAimEventSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_CharacterAimEventSignature, bool, inIsAiming, float, inAimInSpeedMult, float, inAimOutSpeedMult);

