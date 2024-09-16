#pragma once
#include "CoreMinimal.h"
#include "IGS_EditableNumberChangedDelegateSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_EditableNumberChangedDelegateSignature, float, inNumber);
