#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelTransitionSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_LevelTransitionSignature, FName, inLevelName, bool, inIsServerTravel);
