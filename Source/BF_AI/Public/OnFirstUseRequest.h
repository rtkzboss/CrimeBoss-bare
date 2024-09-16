#pragma once
#include "CoreMinimal.h"
#include "OnFirstUseRequest.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFirstUseRequest, const UIGS_NavLinkComponentBase*, ThisComp, const AIGS_GameCharacterFramework*, Pawn);
