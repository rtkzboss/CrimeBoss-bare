#pragma once
#include "CoreMinimal.h"
#include "IGS_OnKeypadLeft.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnKeypadLeft, AIGS_GameCharacterFramework*, inInstigator);