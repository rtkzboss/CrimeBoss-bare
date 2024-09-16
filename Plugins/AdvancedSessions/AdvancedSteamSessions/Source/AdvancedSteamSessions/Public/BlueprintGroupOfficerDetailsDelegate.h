#pragma once
#include "CoreMinimal.h"
#include "BPSteamGroupOfficer.h"
#include "BlueprintGroupOfficerDetailsDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintGroupOfficerDetailsDelegate, const TArray<FBPSteamGroupOfficer>&, OfficerList);
