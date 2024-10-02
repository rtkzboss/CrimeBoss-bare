#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnLootSecuredByCharacter.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnLootSecuredByCharacter, TSubclassOf<UIGS_InventoryObjectFramework>, inInventoryObject, AIGS_GameCharacterFramework*, OwningPawn);
