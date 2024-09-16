#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCharacterRegisteredDynamicSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCharacterRegisteredDynamicSignature, AIGS_GameCharacterFramework*, inCharacter);
