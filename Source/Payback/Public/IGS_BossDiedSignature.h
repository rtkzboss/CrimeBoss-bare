#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "IGS_BossDiedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BossDiedSignature, EIGS_CharacterID, inCharacterID);
