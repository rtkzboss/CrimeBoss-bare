#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_ObjectStatusHealthStateChangedWithCharacterEventSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ObjectStatusHealthStateChangedWithCharacterEventSignature, EIGS_HealthState, HealthState, AIGS_GameCharacterFramework*, Character);
