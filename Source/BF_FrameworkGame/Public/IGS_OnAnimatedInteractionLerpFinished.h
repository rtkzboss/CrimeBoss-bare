#pragma once
#include "CoreMinimal.h"
#include "IGS_OnAnimatedInteractionLerpFinished.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAnimatedInteractionLerpFinished, AIGS_GameCharacterFramework*, inInstigator);
