#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuTileWidget.h"
#include "EIGS_MenuTileSelectionType.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "Types/SlateEnums.h"
#include "IGS_JobsScreenCategoryWidget.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_JobsScreen.generated.h"

class UHorizontalBox;
class UIGSScrollBox;
class UIGS_MenuItemCategoryWidget;
class UUserWidget;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_JobsScreen();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateRecomendedCategory();

public:
    UFUNCTION(BlueprintCallable)
    void SelectCategory(int32 categoryIndex, bool autoscroll, bool setFocusOnFirstItem);

    UFUNCTION(BlueprintCallable)
    void ScrollToCategory(int32 categoryIndex);

private:
    UFUNCTION()
    void OnSelectCategory_NoScrollNoFocus(UIGS_MenuItemCategoryWidget* categoryWidget);

    UFUNCTION()
    void OnSelectCategory_Internal(UIGS_MenuItemCategoryWidget* categoryWidget, int32 Direction);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnJobScreenInitialized();

private:
    UFUNCTION()
    void OnJobItemSelected_Internal(UIGS_MenuTileWidget* jobWidget);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnJobItemSelected(UIGS_MenuTileWidget* jobWidget);

    UFUNCTION(BlueprintImplementableEvent)
    void OnCategorySelected(int32 categoryIndex);

    UFUNCTION(BlueprintCallable)
    void InitializeJobScreen(const TArray<FIGS_MultiplayerJobCategoryRow>& inCategories);

private:
    UFUNCTION()
    void HandleNavigationBetweenCategories(UIGS_MenuItemCategoryWidget* categoryWidget, EUINavigation inNavigation);

public:
    UFUNCTION(BlueprintCallable)
    void GoToCategory(int32 Direction);

    UFUNCTION(BlueprintPure)
    UUserWidget* GetWidgetByJobTag(FGameplayTag inTag, bool inIncludeRecomended) const;

    UFUNCTION(BlueprintPure)
    UIGS_JobsScreenCategoryWidget* GetSelectedCategoryWidget() const;

    UFUNCTION(BlueprintPure)
    UIGS_JobsScreenCategoryWidget* GetCategoryByIndex(int32 Index);

    UFUNCTION(BlueprintPure)
    int32 GetCategoriesCount();

    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UHorizontalBox* JobsCategoriesContent;

    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UIGSScrollBox* IGSScrollBoxWidget;

    UPROPERTY(EditAnywhere)
    float ScrollPaddingOnCategorySelect;

    UPROPERTY(EditAnywhere)
    TSubclassOf<UIGS_JobsScreenCategoryWidget> CategoryWidgetClass;

    UPROPERTY(BlueprintReadOnly)
    int32 SelectedCategoryIndex;

    UPROPERTY(EditAnywhere)
    bool AllowEndlessScroll;

    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_JobsScreenCategoryWidget*> CategoryWidgets;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_MenuTileWidget> ItemWidgetClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MenuTileSelectionType CategoryItemSelectionType;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_JobsScreenCategoryWidget* RecomendedCategoryWidget;

private:
    UPROPERTY()
    FIGS_MultiplayerJobCategoryRow RecomendedCategoryData;

};
