#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetWithInput.h"
#include "IGS_JobItemSelectedDelegate.h"
#include "IGS_JobsCategoryHoveredDelegate.h"
#include "IGS_JobsCategorySelectDelegate.h"
#include "IGS_JobsCategorySelectNoScrollNoFocusDelegate.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_JobsScreenCategoryWidget.generated.h"

class UHorizontalBox;
class UIGS_JobsItemWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsScreenCategoryWidget : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHorizontalBox* CategoryContentBox;
    
    UPROPERTY(Instanced)
    UTextBlock* CategoryNameText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_JobsItemWidget> JobsItemWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_JobsCategorySelect OnJobsCategorySelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_JobsCategorySelectNoScrollNoFocus OnJobsCategorySelectNoScrollNoFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_JobsCategoryHovered OnJobItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_JobItemSelected OnJobItemSelected;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_JobsItemWidget*> JobItemWidgets;
    
    UPROPERTY(BlueprintReadOnly)
    bool isSelected;
    
    UIGS_JobsScreenCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void TrySetFocusToFirstJobWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetIsCategorySelected(bool inIsSelected);
    
private:
    UFUNCTION()
    void OnJobItemSelected_Internal(UIGS_JobsItemWidget* JobWidget);
    
    UFUNCTION()
    void OnJobItemHovered_Internal();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCategorySelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCategoryInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCategoryDeselected();
    
    UFUNCTION(BlueprintCallable)
    void InitCategory(const FIGS_MultiplayerJobCategoryRow& categoryData);
    
    UFUNCTION(BlueprintPure)
    UIGS_JobsItemWidget* GetFirstJobWidget() const;
    
};

