#pragma once
#include "CoreMinimal.h"
#include "IGS_CareerSaveDataRequestedDelegate.generated.h"

class UIGS_PaybackSaveGameCareer;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CareerSaveDataRequestedDelegate, UIGS_PaybackSaveGameCareer*, CareerSaveGame);