#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_DetectorTeamSideChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DetectorTeamSideChanged, EIGS_TeamSideEnum, inNewTeamSide);
