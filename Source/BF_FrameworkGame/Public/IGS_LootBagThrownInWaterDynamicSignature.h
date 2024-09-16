#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagThrownInWaterDynamicSignature.generated.h"

class AIGS_PlayerCharacter;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootBagThrownInWaterDynamicSignature, AIGS_PlayerCharacter*, Instigator);
