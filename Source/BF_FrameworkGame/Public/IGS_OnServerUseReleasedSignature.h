#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerUseReleasedSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerUseReleasedSignature, AIGS_GameCharacterFramework*, inInstigator);