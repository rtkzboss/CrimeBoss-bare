#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPSteamWorkshopID.h"
#include "BlueprintWorkshopDetailsDelegateDelegate.h"
#include "SteamWSRequestUGCDetailsCallbackProxy.generated.h"

class UObject;
class USteamWSRequestUGCDetailsCallbackProxy;

UCLASS(MinimalAPI)
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    USteamWSRequestUGCDetailsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(UObject* WorldContextObject, FBPSteamWorkshopID WorkShopID);
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintWorkshopDetailsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintWorkshopDetailsDelegate OnFailure;
    
};

