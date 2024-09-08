#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPUniqueNetId.h"
#include "BlueprintFindFriendSessionDelegateDelegate.h"
#include "FindFriendSessionCallbackProxy.generated.h"

class APlayerController;
class UFindFriendSessionCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlueprintFindFriendSessionDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintFindFriendSessionDelegate OnFailure;
    
    UFindFriendSessionCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UFindFriendSessionCallbackProxy* FindFriendSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);
    
};

