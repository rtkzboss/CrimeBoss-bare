#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemConfirmed.generated.h"

class UIGS_MenuTileWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ItemConfirmed, UIGS_MenuTileWidget*, Widget);
