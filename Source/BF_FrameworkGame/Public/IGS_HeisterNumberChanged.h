#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterNumberChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HeisterNumberChanged, int32, HeisterNumber);
