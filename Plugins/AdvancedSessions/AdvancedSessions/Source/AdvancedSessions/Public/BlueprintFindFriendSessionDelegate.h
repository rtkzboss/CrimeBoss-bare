#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "BlueprintFindFriendSessionDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintFindFriendSessionDelegate, const TArray<FBlueprintSessionResult>&, SessionInfo);
