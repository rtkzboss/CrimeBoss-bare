#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientUseReleasedSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientUseReleasedSignature, AIGS_GameCharacterFramework*, inInstigator);