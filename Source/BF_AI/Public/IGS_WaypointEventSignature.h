#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointEventSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WaypointEventSignature, AIGS_GameCharacterFramework*, inCharacter);