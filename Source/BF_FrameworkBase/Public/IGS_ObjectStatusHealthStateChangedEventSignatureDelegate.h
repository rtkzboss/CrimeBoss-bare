#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_ObjectStatusHealthStateChangedEventSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ObjectStatusHealthStateChangedEventSignature, EIGS_HealthState, HealthState);

