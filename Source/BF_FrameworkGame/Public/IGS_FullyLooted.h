#pragma once
#include "CoreMinimal.h"
#include "IGS_FullyLooted.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_FullyLooted, AIGS_GameCharacterFramework*, Instigator);
