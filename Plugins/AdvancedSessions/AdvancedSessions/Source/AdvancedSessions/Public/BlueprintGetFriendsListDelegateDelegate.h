#pragma once
#include "CoreMinimal.h"
#include "BPFriendInfo.h"
#include "BlueprintGetFriendsListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintGetFriendsListDelegate, const TArray<FBPFriendInfo>&, Results);

