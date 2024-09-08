#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_LerpCurve.h"
#include "MiniLerpOutputFinishPinDelegate.h"
#include "MiniLerpOutputPinDelegate.h"
#include "IGS_MiniProgressLerp.generated.h"

class UIGS_MiniProgressLerp;
class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_MiniProgressLerp : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMiniLerpOutputPin Update;
    
    UPROPERTY(BlueprintAssignable)
    FMiniLerpOutputFinishPin Finished;
    
    UIGS_MiniProgressLerp();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_MiniProgressLerp* MiniProgressLerp(UObject* inWorldContextObject, UIGS_MiniProgressLerp*& outSelf, float inDuration, float inFromValue, float inToValue, EIGS_LerpCurve inCurve);
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    float GetToValue() const;
    
private:
    UFUNCTION()
    void ExecUpdate();
    
    UFUNCTION()
    void ExecFinish();
    
public:
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

