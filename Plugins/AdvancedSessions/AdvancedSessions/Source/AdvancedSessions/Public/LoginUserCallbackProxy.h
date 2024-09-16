#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "LoginUserCallbackProxy.generated.h"

class APlayerController;
class UObject;

UCLASS(MinimalAPI)
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    ULoginUserCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static ULoginUserCallbackProxy* LoginUser(UObject* WorldContextObject, APlayerController* PlayerController, const FString& UserID, const FString& UserToken, const FString& AuthType);

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;

};
