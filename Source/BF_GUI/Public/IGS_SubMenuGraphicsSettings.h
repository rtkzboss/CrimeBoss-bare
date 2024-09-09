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

    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* DisplayModeSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ResolutionSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* VSYNCSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* ResolutionScaleSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ViewDistanceSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* AntiAliasingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* PostProcessingSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ShadowsSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* TexturesSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* EffectsSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FoliageSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FOVSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* MotionBlurSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SSRSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* AOSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSlider* SharpenSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ProfileSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* DLSSSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* SuperSamplingQualitySpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* ReflexSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FrameGenerationSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* MonitorSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FPSLimitSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FPSLimitInMenusSpinBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetFocusableSpinBox* FPSLimitUnfocusedSpinBox;
    
};

