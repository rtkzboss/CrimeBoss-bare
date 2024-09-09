#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_TabEventDelegate.h"
#include "IGS_WidgetButtonSimple.h"
#include "IGS_TabButton.generated.h"

class UIGS_FancyText;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_TabButton : public UIGS_WidgetButtonSimple {
    GENERATED_BODY()
public:
    UIGS_TabButton();

    UFUNCTION(BlueprintCallable)
    void SetIconText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryTitleText(const FText& InText);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer ScreenTags;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UIGS_FancyText* Icon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UIGS_FancyText* CategoryTitle;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_TabEvent OnTabClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_TabEvent OnTabFocused;
    
};

