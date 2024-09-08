#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerStateChangedSignatureDelegate.generated.h"

class AIGS_PlayerStateGame;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerStateChangedSignature, AIGS_PlayerStateGame*, NewPlayerState);

