#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientHoldCanceledSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientHoldCanceledSignature, AIGS_GameCharacterFramework*, inInstigator);