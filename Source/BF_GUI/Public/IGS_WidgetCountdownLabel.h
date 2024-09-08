#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_WidgetCountdownLabel.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetCountdownLabel : public UIGS_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 RemainingSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowNegativeSeconds;
    
    UIGS_WidgetCountdownLabel();

    UFUNCTION(BlueprintCallable)
    void StopCountdown();
    
    UFUNCTION(BlueprintCallable)
    void StartCountdown(int32 InSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRemainingSecondsValue(int32 InSeconds);
    
private:
    UFUNCTION()
    void HandleCountdownTick();
    
};

