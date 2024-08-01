#pragma once
#include "CoreMinimal.h"
#include "IGS_JobItemSelected.generated.h"

class UIGS_JobsItemWidget;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_JobItemSelected, UIGS_JobsItemWidget*, JobWidget);