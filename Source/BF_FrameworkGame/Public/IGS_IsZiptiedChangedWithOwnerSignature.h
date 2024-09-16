#pragma once
#include "CoreMinimal.h"
#include "IGS_IsZiptiedChangedWithOwnerSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_IsZiptiedChangedWithOwnerSignature, bool, InValue, AIGS_GameCharacterFramework*, inOwner, AIGS_GameCharacterFramework*, inInstigator);
