#pragma once
#include "CoreMinimal.h"
#include "EventPointReachedSignature.generated.h"

class UObject;
class UPFPathFollowerComponent;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEventPointReachedSignature, UPFPathFollowerComponent*, FollowerComp, float, Distance, UObject*, ExtraData);