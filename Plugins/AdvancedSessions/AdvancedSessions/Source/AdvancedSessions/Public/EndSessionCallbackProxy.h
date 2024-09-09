#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EndSessionCallbackProxy.generated.h"

class APlayerController;
class UEndSessionCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UEndSessionCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UEndSessionCallbackProxy* EndSession(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
};

