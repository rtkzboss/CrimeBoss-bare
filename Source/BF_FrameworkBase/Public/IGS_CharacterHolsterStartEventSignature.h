#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterHolsterStartEventSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CharacterHolsterStartEventSignature, bool, inIsHolstering, bool, inSkipAnimation);
