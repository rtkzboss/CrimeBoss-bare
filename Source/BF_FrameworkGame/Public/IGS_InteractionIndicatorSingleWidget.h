#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_InteractionIndicatorSingleWidget.generated.h"

class UIGS_InteractiveComponent;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_InteractionIndicatorSingleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FadeDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bOnScreen;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Angle;
    
    UIGS_InteractionIndicatorSingleWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnOnScreenChanged(bool inOnScreen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloseByChanged(bool inClose);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChosenChanged(bool inChosen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CanvasTick(UIGS_InteractiveComponent* inInteraction);
    
};

