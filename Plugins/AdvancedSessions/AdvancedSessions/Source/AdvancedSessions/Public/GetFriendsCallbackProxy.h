#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintGetFriendsListDelegate.h"
#include "GetFriendsCallbackProxy.generated.h"

class APlayerController;
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
