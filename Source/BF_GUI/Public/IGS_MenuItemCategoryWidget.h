#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSelectionType.h"
#include "IGS_WidgetWithInput.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Blueprint/WidgetNavigation.h"
#include "IGS_ItemConfirmed.h"
#include "IGS_ItemSelected.h"
#include "IGS_MenuItemCategorySelect.h"
#include "IGS_MenuItemCategorySelectNoScrollNoFocus.h"
#include "IGS_MenuTileWidget.h"
#include "IGS_NavigatedFromCategory.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuItemCategoryWidget.generated.h"

class UHorizontalBox;
class UIGS_MenuTileDataBase;
class UTextBlock;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_MenuItemCategoryWidget : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UIGS_MenuItemCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void TrySetFocusToFirstWidget();

    UFUNCTION(BlueprintCallable)
    void SetIsCategorySelected(bool inIsSelected);

    UFUNCTION(BlueprintCallable)
    void SelectLastTopWidget();

private:
    UFUNCTION()
    void OnItemSelected_Internal(UIGS_MenuTileWidget* Widget);

    UFUNCTION()
    void OnItemConfirmed_Internal(UIGS_MenuTileWidget* Widget);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCategorySelected();

    UFUNCTION(BlueprintImplementableEvent)
    void OnCategoryInitialized();

    UFUNCTION(BlueprintImplementableEvent)
    void OnCategoryDeselected();

    UFUNCTION(BlueprintCallable)
    void InitCategory(FText Name, TArray<UIGS_MenuTileDataBase*> Items);

    UFUNCTION()
    void HandleOnNavigatedFromCategory(EUINavigation inNavigation);

    UFUNCTION(BlueprintPure)
    UIGS_MenuTileWidget* GetFirstWidget() const;

    UFUNCTION(BlueprintCallable)
    void DeselectOtherItems(UIGS_MenuTileWidget* inKeepSelected);

    UFUNCTION(BlueprintCallable)
    void DeselectAllItems();

    UPROPERTY(Instanced)
    UHorizontalBox* CategoryContentBox;

    UPROPERTY(Instanced)
    UTextBlock* CategoryNameText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_MenuTileWidget> ItemWidgetClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MenuTileSelectionType ItemsSelectionType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TopFirstColumnItemMargin;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TopItemMargin;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin BottomFirstColumnItemMargin;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin BottomItemMargin;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_MenuItemCategorySelect OnCategorySelect;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_MenuItemCategorySelectNoScrollNoFocus OnCategorySelectNoScrollNoFocus;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ItemSelected OnItemSelected;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ItemConfirmed OnItemConfirmed;

    UPROPERTY(BlueprintAssignable)
    FIGS_NavigatedFromCategory OnNavigatedFromCategory;

    UPROPERTY()
    FCustomWidgetNavigationDelegate OnNavigatedFromCategory_Internal;

    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_MenuTileWidget*> ItemWidgets;

    UPROPERTY(BlueprintReadOnly)
    bool isSelected;

};
