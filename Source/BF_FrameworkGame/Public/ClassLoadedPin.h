#pragma once
#include "CoreMinimal.h"
#include "ClassLoadedPin.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClassLoadedPin, UClass*, Class);