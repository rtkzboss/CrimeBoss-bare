#pragma once
#include "CoreMinimal.h"
#include "IGS_OffenceChangedEventSignature.generated.h"

class UIGS_AISuspiciousnessComponentBase;
class UIGS_OffenceData;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OffenceChangedEventSignature, UIGS_AISuspiciousnessComponentBase*, inSuspiciousnessComponent, UIGS_OffenceData*, inNewOffence);