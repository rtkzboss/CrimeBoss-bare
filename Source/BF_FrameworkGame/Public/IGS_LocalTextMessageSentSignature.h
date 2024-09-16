#pragma once
#include "CoreMinimal.h"
#include "IGS_LocalTextMessageSentSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LocalTextMessageSentSignature, FText, inMessage);
