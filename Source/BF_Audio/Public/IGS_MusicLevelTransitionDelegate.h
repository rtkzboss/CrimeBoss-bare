#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelTransitionType.h"
#include "IGS_MusicLevelTransitionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MusicLevelTransition, EIGS_LevelTransitionType, LevelTransition);

