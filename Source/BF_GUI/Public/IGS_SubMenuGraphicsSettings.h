#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuGraphicsSettings.generated.h"

class UIGS_WidgetFocusableSlider;
class UIGS_WidgetFocusableSpinBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SubMenuGraphicsSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UIGS_SubMenuGraphicsSettings();

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* DisplayModeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ResolutionSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* VSYNCSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* ResolutionScaleSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ViewDistanceSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* AntiAliasingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* PostProcessingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ShadowsSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* TexturesSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* EffectsSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FoliageSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FOVSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* MotionBlurSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* SSRSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* AOSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSlider* SharpenSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ProfileSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* DLSSSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* SuperSamplingQualitySpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* ReflexSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FrameGenerationSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* MonitorSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FPSLimitSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FPSLimitInMenusSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UIGS_WidgetFocusableSpinBox* FPSLimitUnfocusedSpinBox;
    
};

