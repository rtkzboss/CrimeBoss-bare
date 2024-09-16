#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterUnlocked.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CharacterUnlocked, EIGS_CharacterID, inID, bool, inMaxLeveled);
