#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTileSuccess.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnTileSuccess, AIGS_GameCharacterFramework*, inInstigator);
