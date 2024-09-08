#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "AutoLoginUserCallbackProxy.generated.h"

class UAutoLoginUserCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UAutoLoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
    UAutoLoginUserCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UAutoLoginUserCallbackProxy* AutoLoginUser(UObject* WorldContextObject, int32 LocalUserNum);
    
};

