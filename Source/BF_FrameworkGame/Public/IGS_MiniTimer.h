#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MiniTimerOutputPin.h"
#include "IGS_MiniTimer.generated.h"

class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_MiniTimer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_MiniTimer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_MiniTimer* MiniTimer(UObject* inWorldContextObject, float inTimerInterval, float inTimerDuration);

private:
    UFUNCTION()
    void ExecUpdate();

    UFUNCTION()
    void ExecFinish();

public:
    UPROPERTY(BlueprintAssignable)
    FMiniTimerOutputPin Update;

    UPROPERTY(BlueprintAssignable)
    FMiniTimerOutputPin Finished;

};
