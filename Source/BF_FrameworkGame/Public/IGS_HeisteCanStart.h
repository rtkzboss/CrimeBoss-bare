#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisteCanStart.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HeisteCanStart, bool, inHeisteCanStart);
