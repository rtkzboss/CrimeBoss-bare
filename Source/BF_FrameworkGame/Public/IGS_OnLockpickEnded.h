#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLockpickEnded.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnLockpickEnded, bool, inResult, AIGS_GameCharacterFramework*, inInstigator);
