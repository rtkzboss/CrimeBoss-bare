#pragma once
#include "CoreMinimal.h"
#include "META_MovieUIData.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnMovieFinishedLatentDelegate.h"
#include "IGS_OnMovieStartedLatentDelegate.h"
#include "IGS_PlayMovieLatent.generated.h"

class UIGS_PlayMovieLatent;
class UObject;

UCLASS()
class CRIMEBOSSMETA_API UIGS_PlayMovieLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnMovieStartedLatent OnMovieStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnMovieFinishedLatent OnMovieFinished;
    
    UIGS_PlayMovieLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_PlayMovieLatent* PlayMovieLatent(UObject* WorldContextObject, FMETA_MovieUIData inMovieData);
    
private:
    UFUNCTION()
    void MovieStarted_Internal();
    
    UFUNCTION()
    void MovieFinished_Internal();
    
};

