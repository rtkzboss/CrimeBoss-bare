#pragma once
#include "CoreMinimal.h"
#include "OnBreakableStateChangedDelegate.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBreakableStateChangedDelegate, AActor*, DmgCause);
