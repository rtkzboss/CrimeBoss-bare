#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPUniqueNetId.h"
#include "BlueprintFindFriendSessionDelegate.h"
#include "FindFriendSessionCallbackProxy.generated.h"

class APlayerController;
class UObject;

UCLASS(MinimalAPI)
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UFindFriendSessionCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UFindFriendSessionCallbackProxy* FindFriendSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);

    UPROPERTY(BlueprintAssignable)
    FBlueprintFindFriendSessionDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FBlueprintFindFriendSessionDelegate OnFailure;

};
