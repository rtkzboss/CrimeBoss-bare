#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "StartSessionCallbackProxyAdvanced.generated.h"

class UObject;
class UStartSessionCallbackProxyAdvanced;

UCLASS(MinimalAPI)
class UStartSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
    UStartSessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UStartSessionCallbackProxyAdvanced* StartAdvancedSession(const UObject* WorldContextObject);
    
};

