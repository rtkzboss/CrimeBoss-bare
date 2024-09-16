#pragma once
#include "CoreMinimal.h"
#include "StartPathSignature.generated.h"

class UPFPathFollowerComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartPathSignature, UPFPathFollowerComponent*, FollowerComp);
