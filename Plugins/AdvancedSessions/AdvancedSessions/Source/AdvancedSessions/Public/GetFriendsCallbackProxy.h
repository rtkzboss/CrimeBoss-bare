#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintGetFriendsListDelegateDelegate.h"
#include "GetFriendsCallbackProxy.generated.h"

class APlayerController;
class UGetFriendsCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintGetFriendsListDelegate OnFailure;
    
    UGetFriendsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UGetFriendsCallbackProxy* GetAndStoreFriendsList(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

