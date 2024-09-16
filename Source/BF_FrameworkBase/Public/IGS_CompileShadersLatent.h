#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_ComipleShadersFinishedPin.h"
#include "IGS_CompileShadersProgressPin.h"
#include "IGS_CompileShadersLatent.generated.h"

class UObject;

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_CompileShadersLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
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

    UPROPERTY(BlueprintAssignable)
    FIGS_CompileShadersProgressPin Update;

    UPROPERTY(BlueprintAssignable)
    FIGS_ComipleShadersFinishedPin Finished;

};
