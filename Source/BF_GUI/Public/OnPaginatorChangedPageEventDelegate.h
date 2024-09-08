#pragma once
#include "CoreMinimal.h"
#include "OnPaginatorChangedPageEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPaginatorChangedPageEvent, int32, NewIndex);

