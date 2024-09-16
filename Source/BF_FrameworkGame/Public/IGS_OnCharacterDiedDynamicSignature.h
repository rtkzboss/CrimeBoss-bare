#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_OnCharacterDiedDynamicSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnCharacterDiedDynamicSignature, AIGS_GameCharacterFramework*, inCharacter, EIGS_TeamSideEnum, inTeamSide);
