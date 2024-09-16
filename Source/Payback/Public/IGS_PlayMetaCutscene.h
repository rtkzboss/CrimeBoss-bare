#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_CutsceneTagValue.h"
#include "IGS_MetaCutsceneCharacters.h"
#include "IGS_MetaCutsceneResultDelegate.h"
#include "IGS_MetaCutsceneResults.h"
#include "IGS_PlayMetaCutscene.generated.h"

class UObject;

UCLASS()
class PAYBACK_API UIGS_PlayMetaCutscene : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PlayMetaCutscene();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PlayMetaCutscene* PlayMetaCutscene(UObject* inWCO, FText inCutsceneID, FText inDebugText, TMap<FGameplayTag, FIGS_CutsceneTagValue> inTagParams, FIGS_MetaCutsceneCharacters inCharacters, bool inAutoStart);

protected:
    UFUNCTION()
    void OnCutsceneUnloaded(FName inCutsceneID);

    UFUNCTION()
    void OnCutsceneStarted(FName inCutsceneID, FIGS_MetaCutsceneResults inResults);

    UFUNCTION()
    void OnCutsceneLoaded(FName inCutsceneID);

    UFUNCTION()
    void OnCutsceneFinished(FName inCutsceneID, FIGS_MetaCutsceneResults inResult);

    UFUNCTION()
    void LoadCutscene(FName inCutsceneID);

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneResultDelegate CutsceneStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneResultDelegate CutsceneFinished;

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneResultDelegate CutsceneUnloaded;

};
