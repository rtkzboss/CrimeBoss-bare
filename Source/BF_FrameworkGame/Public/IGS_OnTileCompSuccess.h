#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTileCompSuccess.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnTileCompSuccess, AIGS_GameCharacterFramework*, inInstigator);