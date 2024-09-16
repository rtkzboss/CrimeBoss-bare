#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueAsyncNodeDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DialogueAsyncNodeDelegate, int32, LineIndex);
