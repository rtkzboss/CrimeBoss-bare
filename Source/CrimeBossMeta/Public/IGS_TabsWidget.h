#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetWithInput.h"
#include "IGS_OnTabSelectedEvent.h"
#include "IGS_TabsWidget.generated.h"

class UHorizontalBox;
class UUserWidget;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_TabsWidget : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UIGS_TabsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTabIndex(int32 inIndex);

public:
    UFUNCTION(BlueprintCallable)
    void SetInputEnabled(bool inEnabled);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTabSelected_Internal(int32 inIndex);

    UFUNCTION(BlueprintImplementableEvent)
    void OnTabAdded(UUserWidget* tabWidget, int32 Index);

public:
    UFUNCTION(BlueprintPure)
    bool IsInputEnabled() const;

protected:
    UFUNCTION(BlueprintCallable)
    void ChangeTab(int32 Direction);

public:
    UFUNCTION(BlueprintCallable)
    void AddTab(UUserWidget* inTab);

    UPROPERTY(BlueprintReadOnly)
    bool InputEnabled;

    UPROPERTY(BlueprintReadOnly)
    int32 SelectedIndex;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UHorizontalBox* TabsHorizontalBox;

    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UUserWidget*> Tabs;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnTabSelectedEvent OnTabSelected;

};
