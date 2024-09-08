#pragma once
#include "CoreMinimal.h"
#include "IGS_OutOfBoundsChangedSignatureDelegate.generated.h"

class AIGS_PlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OutOfBoundsChangedSignature, AIGS_PlayerCharacter*, inCharacter, bool, inIsOutOfBounds);

