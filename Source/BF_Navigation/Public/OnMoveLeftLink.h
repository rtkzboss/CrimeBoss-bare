#pragma once
#include "CoreMinimal.h"
#include "OnMoveLeftLink.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoveLeftLink, const UIGS_NavLinkComponentFramework*, ThisComp, const AIGS_GameCharacterFramework*, Pawn);