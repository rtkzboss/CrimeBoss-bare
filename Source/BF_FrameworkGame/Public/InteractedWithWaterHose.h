#pragma once
#include "CoreMinimal.h"
#include "InteractedWithWaterHose.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractedWithWaterHose, AIGS_GameCharacterFramework*, inInstigator);
