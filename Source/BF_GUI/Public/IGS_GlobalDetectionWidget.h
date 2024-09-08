#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_GlobalDetectionWidget.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_GlobalDetectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_GlobalDetectionWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectionFullEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectionChangedEvent(float InValue);
    
};

