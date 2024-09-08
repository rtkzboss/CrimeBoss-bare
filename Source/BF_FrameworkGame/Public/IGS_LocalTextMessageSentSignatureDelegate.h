#pragma once
#include "CoreMinimal.h"
#include "IGS_LocalTextMessageSentSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LocalTextMessageSentSignature, FText, inMessage);

