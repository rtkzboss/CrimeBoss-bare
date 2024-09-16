#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "StartSessionCallbackProxyAdvanced.generated.h"

class UObject;

UCLASS(MinimalAPI)
class UStartSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UStartSessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UStartSessionCallbackProxyAdvanced* StartAdvancedSession(const UObject* WorldContextObject);

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;

};
