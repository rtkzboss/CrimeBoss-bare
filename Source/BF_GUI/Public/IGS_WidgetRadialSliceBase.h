#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_Widget.h"
#include "IGS_WidgetRadialSliceBase.generated.h"

class AIGS_PlayerControllerRoot;
class UImage;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetRadialSliceBase : public UIGS_Widget {
    GENERATED_BODY()
public:
    UIGS_WidgetRadialSliceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceUnhover();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceHover();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SliceClicked();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSliceInitialized();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoverColor;

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UImage* BackgroundImage;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsHovered;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;

};
