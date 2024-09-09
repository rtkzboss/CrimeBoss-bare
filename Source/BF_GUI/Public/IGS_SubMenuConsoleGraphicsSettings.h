#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuConsoleGraphicsSettings.generated.h"

class UIGS_WidgetFocusableSpinBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SubMenuConsoleGraphicsSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UIGS_SubMenuConsoleGraphicsSettings();

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FOVSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* RenderingModeSpinBox;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FText> PerformanceModeConsoleVariables;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FText> QualityModeConsoleVariables;
    
};

