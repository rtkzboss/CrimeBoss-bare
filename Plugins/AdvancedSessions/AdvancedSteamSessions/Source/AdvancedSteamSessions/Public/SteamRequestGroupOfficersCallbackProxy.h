#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintGroupOfficerDetailsDelegate.h"
#include "SteamRequestGroupOfficersCallbackProxy.generated.h"

class UObject;

UCLASS(MinimalAPI)
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    USteamRequestGroupOfficersCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(UObject* WorldContextObject, FBPUniqueNetId GroupUniqueNetID);

    UPROPERTY(BlueprintAssignable)
    FBlueprintGroupOfficerDetailsDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FBlueprintGroupOfficerDetailsDelegate OnFailure;

};
