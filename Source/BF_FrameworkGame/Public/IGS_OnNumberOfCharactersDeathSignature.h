#pragma once
#include "CoreMinimal.h"
#include "IGS_OnNumberOfCharactersDeathSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnNumberOfCharactersDeathSignature, AIGS_GameCharacterFramework*, inCharacter, int32, inCount);