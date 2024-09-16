#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerTriggerSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerTriggerSignature, AIGS_GameCharacterFramework*, inInstigator);
