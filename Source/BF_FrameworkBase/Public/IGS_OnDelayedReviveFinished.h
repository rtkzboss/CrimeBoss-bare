#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDelayedReviveFinished.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDelayedReviveFinished, AIGS_GameCharacterFramework*, inCharacter);
