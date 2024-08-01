#pragma once
#include "CoreMinimal.h"
#include "NavLinkReachedSignature.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_NavLinkBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNavLinkReachedSignature, const AIGS_NavLinkBase*, SmartLink, const AIGS_GameCharacterFramework*, Pawn, bool, IsRight);