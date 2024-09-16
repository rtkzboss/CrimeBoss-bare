#pragma once
#include "CoreMinimal.h"
#include "META_MovieUIData.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnMovieFinishedLatent.h"
#include "IGS_OnMovieStartedLatent.h"
#include "IGS_PlayMovieLatent.generated.h"

class UObject;

UCLASS()
class CRIMEBOSSMETA_API UIGS_PlayMovieLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PlayMovieLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_PlayMovieLatent* PlayMovieLatent(UObject* WorldContextObject, FMETA_MovieUIData inMovieData);

private:
    UFUNCTION()
    void MovieStarted_Internal();

    UFUNCTION()
    void MovieFinished_Internal();

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnMovieStartedLatent OnMovieStarted;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnMovieFinishedLatent OnMovieFinished;

};
