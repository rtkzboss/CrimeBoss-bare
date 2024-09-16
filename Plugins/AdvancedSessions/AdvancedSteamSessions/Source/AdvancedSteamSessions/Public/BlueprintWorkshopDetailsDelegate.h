#pragma once
#include "CoreMinimal.h"
#include "BPSteamWorkshopItemDetails.h"
#include "BlueprintWorkshopDetailsDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintWorkshopDetailsDelegate, const FBPSteamWorkshopItemDetails&, WorkShopDetails);
