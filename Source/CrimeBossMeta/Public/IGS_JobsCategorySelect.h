#pragma once
#include "CoreMinimal.h"
#include "IGS_JobsCategorySelect.generated.h"

class UIGS_JobsScreenCategoryWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_JobsCategorySelect, UIGS_JobsScreenCategoryWidget*, categoryWidget, int32, Direction);
