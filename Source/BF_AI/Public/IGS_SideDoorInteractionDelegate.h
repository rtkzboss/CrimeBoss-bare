#pragma once
#include "CoreMinimal.h"
#include "IGS_SideDoorInteractionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SideDoorInteraction, bool, IsOpen);

