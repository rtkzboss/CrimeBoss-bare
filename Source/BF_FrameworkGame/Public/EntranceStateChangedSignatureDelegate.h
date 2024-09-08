#pragma once
#include "CoreMinimal.h"
#include "EntranceStateChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEntranceStateChangedSignature, bool, inOpen);

