#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_WidgetWithInput.h"
#include "ETopNavbarDirection.h"
#include "IGS_TabSelectedEventDelegate.h"
#include "IGS_WidgetTopNavbar.generated.h"

class UHorizontalBox;
class UIGS_TabButton;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetTopNavbar : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UIGS_WidgetTopNavbar();

    UFUNCTION(BlueprintCallable)
    void SelectTab(const UIGS_TabButton* inTab);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextTab(ETopNavbarDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabSelected(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintPure)
    UIGS_TabButton* GetTabByScreenTag(FGameplayTag inScreenTag) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAllTabs();
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_TabSelectedEvent OnTabSelectedEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHorizontalBox* TabsOnly;
    
private:
    UPROPERTY(Instanced)
    TArray<UIGS_TabButton*> m_Tabs;
    
};

