#pragma once
#include "CoreMinimal.h"
#include "IGS_ContractID.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnAvailableContractAdded.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAvailableContractAdded, TSubclassOf<UIGS_ContractID>, inID);
