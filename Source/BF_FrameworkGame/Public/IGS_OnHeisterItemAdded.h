#pragma once
#include "CoreMinimal.h"
#include "IGS_OnHeisterItemAdded.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnHeisterItemAdded, UIGS_InventoryObjectFramework*, inItem, AIGS_GameCharacterFramework*, inCharacter);
