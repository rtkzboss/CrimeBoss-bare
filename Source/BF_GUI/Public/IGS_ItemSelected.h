#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemSelected.generated.h"

class UIGS_MenuTileWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ItemSelected, UIGS_MenuTileWidget*, Widget);
