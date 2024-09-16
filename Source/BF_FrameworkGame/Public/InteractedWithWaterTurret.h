#pragma once
#include "CoreMinimal.h"
#include "InteractedWithWaterTurret.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractedWithWaterTurret, AIGS_GameCharacterFramework*, inInstigator);
