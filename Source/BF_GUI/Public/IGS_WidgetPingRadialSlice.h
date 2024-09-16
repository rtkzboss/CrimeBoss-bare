#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCommandType.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetPingRadialSlice.generated.h"

class AIGS_PlayerControllerRoot;
class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetPingRadialSlice : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetPingRadialSlice();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceUnhover();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceHover();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SliceClicked();

    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerPicture(UTexture2D* inTexture);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSliceClicked();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NormalColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoverColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor WieldedColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor WieldedHoverColor;

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UImage* BackgroundImage;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsHovered;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SlotBind;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_PlayerCommandType PlayerCommandType;

};
