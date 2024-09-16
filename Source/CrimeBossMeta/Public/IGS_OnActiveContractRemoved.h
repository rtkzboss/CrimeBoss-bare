#pragma once
#include "CoreMinimal.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnActiveContractRemoved.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnActiveContractRemoved, TSubclassOf<UMETA_MissionID>, inID);
