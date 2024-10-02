#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_SelectionLabelWidget.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SelectionLabelWidget : public UIGS_Widget {
    GENERATED_BODY()
public:
    UIGS_SelectionLabelWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float Progress);

};
