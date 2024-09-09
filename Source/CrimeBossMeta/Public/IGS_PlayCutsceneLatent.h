#pragma once
#include "CoreMinimal.h"
#include "META_CutsceneUIData.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnCutsceneFinishedLatentDelegate.h"
#include "IGS_OnCutsceneStartedLatentDelegate.h"
#include "IGS_PlayCutsceneLatent.generated.h"

class UIGS_PlayCutsceneLatent;
class UObject;

UCLASS()
class CRIMEBOSSMETA_API UIGS_PlayCutsceneLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PlayCutsceneLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_PlayCutsceneLatent* PlayCutsceneLatent(UObject* WorldContextObject, FMETA_CutsceneUIData inCutsceneData);
    
private:
    UFUNCTION()
    void CutsceneStarted_Internal();
    
    UFUNCTION()
    void CutsceneFinished_Internal();
    
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCutsceneStartedLatent OnCutsceneStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCutsceneFinishedLatent OnCutsceneFinished;
    
};

