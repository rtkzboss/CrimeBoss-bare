#pragma once
#include "CoreMinimal.h"
#include "IGS_ContractID.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnContractActivated.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnContractActivated, TSubclassOf<UIGS_ContractID>, inContractID, TSubclassOf<UMETA_MissionID>, inMissionID);
