#pragma once
#include "CoreMinimal.h"
#include "IGS_StrikesAddedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_StrikesAddedSignature, int32, inStrikeCount, int32, inStrikeIncrease, const FText&, inBlameText);