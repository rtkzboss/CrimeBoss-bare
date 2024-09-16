#pragma once
#include "CoreMinimal.h"
#include "OnMoveReachedLink.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMoveReachedLink, const UIGS_NavLinkComponentFramework*, ThisComp, const AIGS_GameCharacterFramework*, Pawn, bool, IsRight);
