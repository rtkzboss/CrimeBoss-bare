#pragma once
#include "CoreMinimal.h"
#include "IGS_SuspicionActorOffenceReportedSignature.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SuspicionActorOffenceReportedSignature, AActor*, inReporter);