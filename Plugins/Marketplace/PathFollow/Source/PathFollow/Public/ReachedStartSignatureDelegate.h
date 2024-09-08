#pragma once
#include "CoreMinimal.h"
#include "ReachedStartSignatureDelegate.generated.h"

class UPFPathFollowerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedStartSignature, UPFPathFollowerComponent*, FollowerComp);

