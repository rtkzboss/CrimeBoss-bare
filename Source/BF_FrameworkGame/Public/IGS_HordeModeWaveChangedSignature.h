#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeWaveChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HordeModeWaveChangedSignature, const int32, inWave);
