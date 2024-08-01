#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagDestroyed.generated.h"

class AIGS_LootBagPickup;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootBagDestroyed, AIGS_LootBagPickup*, inBagPickup);