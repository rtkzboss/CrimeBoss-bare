#pragma once
#include "CoreMinimal.h"
#include "IGS_OnRevivedEvent.generated.h"

class APawn;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnRevivedEvent, APawn*, inHealer);
