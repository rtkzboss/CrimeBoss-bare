#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SessionPropertyKeyPair.h"
#include "CreateSessionCallbackProxyAdvanced.generated.h"

class APlayerController;
class UObject;

UCLASS(MinimalAPI)
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UCreateSessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, bool bStartAfterCreate);

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;

};
