#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuItemCategorySelect.generated.h"

class UIGS_MenuItemCategoryWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_MenuItemCategorySelect, UIGS_MenuItemCategoryWidget*, categoryWidget, int32, Direction);
