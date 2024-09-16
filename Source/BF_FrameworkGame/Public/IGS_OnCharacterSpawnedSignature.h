#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCharacterSpawnedSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCharacterSpawnedSignature, AIGS_GameCharacterFramework*, inCharacter);
