#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPUniqueNetId.h"
#include "BlueprintSendFriendInviteDelegateDelegate.h"
#include "SendFriendInviteCallbackProxy.generated.h"

class APlayerController;
class UObject;
class USendFriendInviteCallbackProxy;

UCLASS(MinimalAPI)
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    USendFriendInviteCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static USendFriendInviteCallbackProxy* SendFriendInvite(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& UniqueNetIDInvited);
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintSendFriendInviteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintSendFriendInviteDelegate OnFailure;
    
};

