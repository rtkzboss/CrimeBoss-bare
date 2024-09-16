#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "OnPaginatorChangedPageEvent.h"
#include "IGS_CarouselPaginator.generated.h"

class UButton;
class UHorizontalBox;
class UNamedSlot;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_CarouselPaginator : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_CarouselPaginator();

    UFUNCTION(BlueprintCallable)
    void StartAutopaging();

    UFUNCTION(BlueprintCallable)
    void SelectPage(int32 NewIndex);

    UFUNCTION(BlueprintCallable)
    void ResetPaginator();

    UFUNCTION(BlueprintPure)
    bool IsLastPageSelected() const;

    UFUNCTION(BlueprintCallable)
    void InitCarousel(int32 newPageCount);

private:
    UFUNCTION()
    void HandleAutoPageSwitch();

public:
    UFUNCTION(BlueprintCallable)
    void ChangePage(int32 Direction);

    UPROPERTY(BlueprintAssignable)
    FOnPaginatorChangedPageEvent OnPageSelectionChanged;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsAutoPagingEnabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartAutpagingOnContruct;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoSwithcingRate;

    UPROPERTY(EditAnywhere, Instanced, meta=(BindWidget))
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

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HideArrowsOnCorners;

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
