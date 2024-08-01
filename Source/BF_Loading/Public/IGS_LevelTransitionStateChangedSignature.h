#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelTransitionType.h"
#include "IGS_LevelTransitionStateChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_LevelTransitionStateChangedSignature, EIGS_LevelTransitionType, inCurrentState, EIGS_LevelTransitionType, inPreviousState);