#pragma once
#include "CoreMinimal.h"
#include "IGS_CompileShadersProgressPin.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CompileShadersProgressPin, float, InProgress);
