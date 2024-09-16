#pragma once
#include "CoreMinimal.h"
#include "EIGS_SignificanceValue.h"
#include "IGS_PostSignificanceDelegate.generated.h"

class UIGS_SignificanceComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_PostSignificanceDelegate, const UIGS_SignificanceComponent*, ObjectInfo, EIGS_SignificanceValue, SignificanceValue);
