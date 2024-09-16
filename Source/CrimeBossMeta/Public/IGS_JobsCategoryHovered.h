#pragma once
#include "CoreMinimal.h"
#include "IGS_JobsCategoryHovered.generated.h"

class UIGS_JobsScreenCategoryWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_JobsCategoryHovered, UIGS_JobsScreenCategoryWidget*, categoryWidget);
