#pragma once
#include "CoreMinimal.h"
#include "ReachedEndSignature.generated.h"

class UPFPathFollowerComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedEndSignature, UPFPathFollowerComponent*, FollowerComp);
