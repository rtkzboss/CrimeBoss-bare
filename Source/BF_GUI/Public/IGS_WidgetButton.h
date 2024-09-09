#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "IGS_WidgetButtonSimple.h"
#include "IGS_WidgetButton.generated.h"

class UIGS_WidgetDecorationBorder;
class UImage;
class USizeBox;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetButton : public UIGS_WidgetButtonSimple {
    GENERATED_BODY()
public:
    UIGS_WidgetButton();

    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_WidgetDecorationBorder* ButtonBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* ButtonFlag;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USizeBox* ButtonFlagSizeBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalFontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredFontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedFontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedFontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledFontColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableAutomaticTextColorHandling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush ImageBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableAutomaticImageColorHandling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BorderWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoveredBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PressedBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SelectedBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DisabledBorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableAutomaticBorderColorHandling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush FlagBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlagVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlagSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SimulatedButton;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasBorder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanHaveFlag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush NormalStyleBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush HoveredStyleBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush PressedStyleBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush SelectedStyleBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush DisabledStyleBrush;
    
};

