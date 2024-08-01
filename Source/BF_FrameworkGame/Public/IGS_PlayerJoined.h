#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerJoined.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerJoined, AIGS_GameCharacterFramework*, inGameCharacter);