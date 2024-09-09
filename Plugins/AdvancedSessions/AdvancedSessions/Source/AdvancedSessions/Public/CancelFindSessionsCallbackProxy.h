#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "CancelFindSessionsCallbackProxy.generated.h"

class APlayerController;
class UCancelFindSessionsCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UCancelFindSessionsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UCancelFindSessionsCallbackProxy* CancelFindSessions(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
};

