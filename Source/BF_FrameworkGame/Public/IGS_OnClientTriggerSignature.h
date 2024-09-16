#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientTriggerSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientTriggerSignature, AIGS_GameCharacterFramework*, inInstigator);
