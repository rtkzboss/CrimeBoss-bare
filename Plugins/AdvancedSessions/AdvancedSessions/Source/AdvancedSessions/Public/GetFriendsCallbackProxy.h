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
    UGetFriendsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UGetFriendsCallbackProxy* GetAndStoreFriendsList(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintGetFriendsListDelegate OnFailure;
    
};

