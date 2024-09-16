#pragma once
#include "CoreMinimal.h"
#include "IGS_ZiplineFinished.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ZiplineFinished, AIGS_GameCharacterFramework*, inPawn);
