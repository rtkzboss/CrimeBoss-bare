#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_FancyText.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_FancyText : public UIGS_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTextBlock* Cyan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTextBlock* Magenta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTextBlock* White;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTextBlock* TopLayer;
    
    UIGS_FancyText();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleSelect(const bool isSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetForceHidden(const bool inForceHidden);
    
};

