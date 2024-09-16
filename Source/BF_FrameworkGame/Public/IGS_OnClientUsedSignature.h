#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientUsedSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientUsedSignature, AIGS_GameCharacterFramework*, inInstigator);
