#pragma once
#include "CoreMinimal.h"
#include "NavLinkLeftSignature.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_NavLinkBase;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNavLinkLeftSignature, const AIGS_NavLinkBase*, SmartLink, const AIGS_GameCharacterFramework*, Pawn);
