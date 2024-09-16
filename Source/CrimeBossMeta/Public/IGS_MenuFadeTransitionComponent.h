#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnTransitionFinished.h"
#include "IGS_MenuFadeTransitionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_MenuFadeTransitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_MenuFadeTransitionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void Show(bool ShouldFade, float FadeTime, bool inShowLoader);

    UFUNCTION(BlueprintImplementableEvent)
    void Hide(bool ShouldFade, float FadeTime);

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnTransitionFinished OnTransitionFinished;

};
