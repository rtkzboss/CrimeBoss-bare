#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "IGS_FindSessionByIdCallbackProxy.generated.h"

class APlayerController;
class UObject;

UCLASS(MinimalAPI)
class UIGS_FindSessionByIdCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UIGS_FindSessionByIdCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_FindSessionByIdCallbackProxy* FindSessionById(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SessionToCheck, bool bUseLAN);

    UPROPERTY(BlueprintAssignable)
    FBlueprintFindSessionsResultDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FBlueprintFindSessionsResultDelegate OnFailure;

private:
    UPROPERTY()
    UObject* WorldContextObject;

};
