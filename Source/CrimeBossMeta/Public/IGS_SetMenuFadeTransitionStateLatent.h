#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnTransitionFinished.h"
#include "IGS_SetMenuFadeTransitionStateLatent.generated.h"

class UObject;

UCLASS()
class CRIMEBOSSMETA_API UIGS_SetMenuFadeTransitionStateLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_SetMenuFadeTransitionStateLatent();

private:
    UFUNCTION()
    void TransitionFinished_Internal();

public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_SetMenuFadeTransitionStateLatent* ShowMenuTransition(UObject* WorldContextObject, bool inShouldFade, float inFadeTime, bool inShowLoader);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_SetMenuFadeTransitionStateLatent* HideMenuTransition(UObject* WorldContextObject, bool inShouldFade, float inFadeTime);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnTransitionFinished OnTransitionFinished;

};
