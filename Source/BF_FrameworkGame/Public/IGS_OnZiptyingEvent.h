#pragma once
#include "CoreMinimal.h"
#include "IGS_OnZiptyingEvent.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnZiptyingEvent, AIGS_GameCharacterFramework*, inTargetCharacter);
