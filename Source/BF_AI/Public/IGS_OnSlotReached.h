#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSlotReached.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSlotReached, AIGS_GameCharacterFramework*, inCharacter);
