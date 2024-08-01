#pragma once
#include "CoreMinimal.h"
#include "OnMissionRemovedDelegate.generated.h"

class UMETA_BaseMission;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionRemovedDelegate, UMETA_BaseMission*, RemovedMission);