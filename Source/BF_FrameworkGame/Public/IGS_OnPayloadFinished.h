#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPayloadFinished.generated.h"

class AIGS_PayloadBase;
class AIGS_PlayerCharacter;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnPayloadFinished, AIGS_PayloadBase*, inPayload, const TArray<AIGS_PlayerCharacter*>&, inPushingPlayers);
