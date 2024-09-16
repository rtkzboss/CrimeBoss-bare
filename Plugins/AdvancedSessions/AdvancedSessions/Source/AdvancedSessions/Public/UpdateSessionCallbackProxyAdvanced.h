#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SessionPropertyKeyPair.h"
#include "UpdateSessionCallbackProxyAdvanced.generated.h"

class UObject;

UCLASS(MinimalAPI)
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UUpdateSessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UUpdateSessionCallbackProxyAdvanced* UpdateSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinViaPresence, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;

};
