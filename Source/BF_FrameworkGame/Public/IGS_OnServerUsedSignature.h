#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerUsedSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerUsedSignature, AIGS_GameCharacterFramework*, inInstigator);
