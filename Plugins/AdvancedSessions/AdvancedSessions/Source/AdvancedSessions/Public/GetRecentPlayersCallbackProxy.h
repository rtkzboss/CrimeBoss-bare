#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPUniqueNetId.h"
#include "BlueprintGetRecentPlayersDelegate.h"
#include "GetRecentPlayersCallbackProxy.generated.h"

class UObject;

UCLASS(MinimalAPI)
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UGetRecentPlayersCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);

    UPROPERTY(BlueprintAssignable)
    FBlueprintGetRecentPlayersDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FBlueprintGetRecentPlayersDelegate OnFailure;

};
