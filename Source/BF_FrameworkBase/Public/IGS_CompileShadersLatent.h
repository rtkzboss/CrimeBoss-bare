#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_ComipleShadersFinishedPinDelegate.h"
#include "IGS_CompileShadersProgressPinDelegate.h"
#include "IGS_CompileShadersLatent.generated.h"

class UIGS_CompileShadersLatent;
class UObject;

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_CompileShadersLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_CompileShadersProgressPin Update;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ComipleShadersFinishedPin Finished;
    
    UIGS_CompileShadersLatent();

private:
    UFUNCTION()
    void ExecUpdate();
    
    UFUNCTION()
    void ExecFinish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_CompileShadersLatent* CompileShadersLatent(UObject* inWCO, float inUpdateFrequence);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

