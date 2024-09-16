#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerSwapActionsSignature.generated.h"

class AIGS_GameCharacterBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_PlayerSwapActionsSignature, AIGS_GameCharacterBase*, inPlayer, AIGS_GameCharacterBase*, inBot);
