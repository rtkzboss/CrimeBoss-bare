#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSplineCompletedEvent.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSplineCompletedEvent, AIGS_GameCharacterFramework*, inPlayer);
