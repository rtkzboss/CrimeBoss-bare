#pragma once
#include "CoreMinimal.h"
#include "IGS_CustomCanTriggerSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIGS_CustomCanTriggerSignature, AIGS_GameCharacterFramework*, inInstigator);