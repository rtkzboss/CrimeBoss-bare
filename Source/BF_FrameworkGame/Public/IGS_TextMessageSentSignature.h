#pragma once
#include "CoreMinimal.h"
#include "IGS_TextMessageSentSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_TextMessageSentSignature, FText, inMessage, const FString&, inPlayerName, int32, inHeisterNum);
