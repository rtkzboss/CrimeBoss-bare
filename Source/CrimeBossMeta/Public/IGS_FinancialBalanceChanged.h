#pragma once
#include "CoreMinimal.h"
#include "IGS_FinancialBalanceChanged.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_FinancialBalanceChanged, int32, CurrentValue, int32, ChangedBy);
