#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPUniqueNetId.h"
#include "BlueprintGetUserPrivilegeDelegateDelegate.h"
#include "EBPUserPrivileges.h"
#include "GetUserPrivilegeCallbackProxy.generated.h"

class UGetUserPrivilegeCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UGetUserPrivilegeCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UGetUserPrivilegeCallbackProxy* GetUserPrivilege(UObject* WorldContextObject, const EBPUserPrivileges& PrivilegeToCheck, const FBPUniqueNetId& PlayerUniqueNetID);
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintGetUserPrivilegeDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
};

