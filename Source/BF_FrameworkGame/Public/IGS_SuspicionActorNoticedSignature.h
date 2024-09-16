#pragma once
#include "CoreMinimal.h"
#include "IGS_SuspicionActorNoticedSignature.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SuspicionActorNoticedSignature, AActor*, inNoticer);
