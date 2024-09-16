#pragma once
#include "CoreMinimal.h"
#include "IGS_OnGadgetPlaced.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_ItemPlacementBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnGadgetPlaced, AIGS_ItemPlacementBase*, GadgetActor, AIGS_GameCharacterFramework*, Instigator);
