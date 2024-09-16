#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ClassLoadedPin.h"
#include "IGS_AsyncLoadClassHighPrio.generated.h"

class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AsyncLoadClassHighPrio : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_AsyncLoadClassHighPrio();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_AsyncLoadClassHighPrio* AsyncLoadClassHighPrio(UObject* inWorldContextObject, TSoftClassPtr<UObject> inClass);

    UPROPERTY(BlueprintAssignable)
    FClassLoadedPin ClassLoaded;

};
