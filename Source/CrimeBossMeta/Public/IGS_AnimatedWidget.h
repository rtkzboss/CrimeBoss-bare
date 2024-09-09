#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_AnimatedWidget.generated.h"

class UObject;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_AnimatedWidget : public UIGS_Widget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_AnimationFinished);
    
    UIGS_AnimatedWidget();

    UFUNCTION(BlueprintCallable)
    void SkipAnimationBP();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SkipAnimation_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAnimationData(UObject* inAnimationData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationBP();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimation_Internal();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationDataSet();
    
    UFUNCTION(BlueprintCallable)
    void FinishAnimation();
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_AnimationFinished OnWidgetAnimationFinished;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    UObject* AnimationData;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPlayingWidgetAnimation;
    
};

