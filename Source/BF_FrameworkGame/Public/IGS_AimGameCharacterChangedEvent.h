#pragma once
#include "CoreMinimal.h"
#include "IGS_AimGameCharacterChangedEvent.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AimGameCharacterChangedEvent, AIGS_GameCharacterFramework*, newAimGameCharacter);
