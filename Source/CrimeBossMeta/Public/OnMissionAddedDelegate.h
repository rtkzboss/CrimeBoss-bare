#pragma once
#include "CoreMinimal.h"
#include "OnMissionAddedDelegate.generated.h"

class UMETA_BaseMission;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionAddedDelegate, UMETA_BaseMission*, AddedMission);
