#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "IGS_BlackScreenWidget.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_BlackScreenWidget : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_BlackScreenWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleGlobalInvalidation(bool inEnabled);

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool ShowBlackScreen;

};
