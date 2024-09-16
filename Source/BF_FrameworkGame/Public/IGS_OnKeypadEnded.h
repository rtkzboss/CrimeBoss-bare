#pragma once
#include "CoreMinimal.h"
#include "IGS_OnKeypadEnded.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnKeypadEnded, bool, inResult, AIGS_GameCharacterFramework*, inInstigator);
