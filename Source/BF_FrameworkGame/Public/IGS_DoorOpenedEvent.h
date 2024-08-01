#pragma once
#include "CoreMinimal.h"
#include "IGS_DoorOpenedEvent.generated.h"

class AIGS_DoorBase;
class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_DoorOpenedEvent, AIGS_GameCharacterFramework*, inCharacter, AIGS_DoorBase*, inOpenedDoor);