#pragma once
#include "CoreMinimal.h"
#include "EIGS_PressurePhase.h"
#include "IGS_PhaseChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PhaseChangedSignature, EIGS_PressurePhase, inPressurePhase);