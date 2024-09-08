#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetDecorationBorder.generated.h"

UCLASS(Abstract, EditInlineNew)
class BF_GUI_API UIGS_WidgetDecorationBorder : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BorderTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BorderWidth;
    
    UIGS_WidgetDecorationBorder();

    UFUNCTION(BlueprintCallable)
    void SetBorderWidth(float inBorderWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderTint(FLinearColor inBorderTint);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBorderWidthChanged(float inBorderWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBorderTintChanged(FLinearColor inBorderTint);
    
};

