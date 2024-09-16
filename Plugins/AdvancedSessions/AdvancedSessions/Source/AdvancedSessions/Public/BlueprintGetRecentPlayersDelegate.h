#pragma once
#include "CoreMinimal.h"
#include "BPOnlineRecentPlayer.h"
#include "BlueprintGetRecentPlayersDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintGetRecentPlayersDelegate, const TArray<FBPOnlineRecentPlayer>&, Results);
