#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuItemCategorySelectNoScrollNoFocus.generated.h"

class UIGS_MenuItemCategoryWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MenuItemCategorySelectNoScrollNoFocus, UIGS_MenuItemCategoryWidget*, categoryWidget);
