#pragma once
#include "CoreMinimal.h"
#include "OnToggleIconSelectedDelegate.generated.h"

class UMETA_BaseMission;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnToggleIconSelectedDelegate, bool, isIconSelected, UMETA_BaseMission*, MissionID);
