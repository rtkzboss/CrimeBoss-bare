#pragma once
#include "CoreMinimal.h"
#include "ObjectInstanceUpdatedDelegate.generated.h"

class UCustomizableObjectInstance;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectInstanceUpdatedDelegate, UCustomizableObjectInstance*, Instance);
