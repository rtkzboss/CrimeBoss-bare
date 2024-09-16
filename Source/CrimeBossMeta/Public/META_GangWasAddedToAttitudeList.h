#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "EMETA_GangAttitudeList.h"
#include "META_GangWasAddedToAttitudeList.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMETA_GangWasAddedToAttitudeList, EMETA_Gang, inOwnerGang, EMETA_Gang, inTargetGang, EMETA_GangAttitudeList, inAttitudeList, int32, inDuration);
