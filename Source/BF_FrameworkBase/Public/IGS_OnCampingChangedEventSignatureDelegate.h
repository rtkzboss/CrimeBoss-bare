#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCampingChangedEventSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCampingChangedEventSignature, bool, inIsCamping);

