#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "Blueprint/UserWidget.h"
#include "IGS_OnListViewIsFocusableChanged.h"
#include "IGS_OnListViewItemHoverChanged.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuListView.generated.h"

class UObject;

UCLASS()
class BF_GUI_API UIGS_MenuListView : public UListView {
    GENERATED_BODY()
public:
    UIGS_MenuListView();

    UFUNCTION(BlueprintCallable)
    void UnhoverListItem(UObject* inItem);

    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool inFocusable);

    UFUNCTION(BlueprintCallable)
    void HoverListItem(UObject* inItem);

    UFUNCTION(BlueprintPure)
    UUserWidget* GetSelectedWidget();

    UFUNCTION(BlueprintCallable)
    void DoubleClickListItem(UObject* inItem);

    UFUNCTION(BlueprintCallable)
    void ClickListItem(UObject* inItem);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnListViewItemHoverChanged OnListViewItemHoverChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnListViewIsFocusableChanged OnListViewIsFocusableChanged;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> ItemWidgetTemplate;

};
