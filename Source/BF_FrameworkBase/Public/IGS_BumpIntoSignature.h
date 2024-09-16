#pragma once
#include "CoreMinimal.h"
#include "IGS_BumpIntoSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BumpIntoSignature, AIGS_GameCharacterFramework*, inBumpinChar);
