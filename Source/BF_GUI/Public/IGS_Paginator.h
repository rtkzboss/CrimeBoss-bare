#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "Styling/SlateBrush.h"
#include "OnPageSelectionChangedEventDelegate.h"
#include "IGS_Paginator.generated.h"

class UButton;
class UHorizontalBox;
class UNamedSlot;
class UWidget;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_Paginator : public UIGS_Widget {
    GENERATED_BODY()
public:
    UIGS_Paginator();

    UFUNCTION(BlueprintCallable)
    void StartAutopaging();
    
    UFUNCTION(BlueprintCallable)
    void SetArrowsVisibility(bool inVisible, bool inCollapse);
    
    UFUNCTION(BlueprintCallable)
    void SelectPage(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetPaginator();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostPageSelected(int32 NewIndex);
    
    UFUNCTION(BlueprintPure)
    bool IsLastPageSelected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstPageSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void InitCarousel(int32 newPageCount);
    
private:
    UFUNCTION()
    void HandleAutoPageSwitch();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetContentWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePage(int32 Direction);
    
    UPROPERTY(BlueprintAssignable)
    FOnPageSelectionChangedEvent OnPageSelectionChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsAutoPagingEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartAutpagingOnContruct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoSwithcingRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(BindWidget))
    UNamedSlot* ContentSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PageCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowDots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowContent;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowArrows;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsFocused;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowEndlessScroll;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush ActivePageIndicator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ActivePageIndicatorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush InactivePageIndicator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InactivePageIndicatorScale;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UHorizontalBox* PageIndicatorsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UButton* LeftArrow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UButton* RightArrow;
    
};

