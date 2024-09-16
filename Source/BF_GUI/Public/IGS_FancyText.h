#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_FancyText.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_FancyText : public UIGS_Widget {
    GENERATED_BODY()
public:
    UIGS_FancyText();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleSelect(const bool isSelected);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetForceHidden(const bool inForceHidden);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(BindWidget))
    UTextBlock* Cyan;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(BindWidget))
    UTextBlock* Magenta;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(BindWidget))
    UTextBlock* White;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(BindWidget))
    UTextBlock* TopLayer;

};
