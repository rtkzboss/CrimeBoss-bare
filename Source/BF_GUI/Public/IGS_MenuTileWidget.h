#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EIGS_MenuTileSelectionType.h"
#include "EIGS_MenuTileSize.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "IGS_ItemConfirmed.h"
#include "IGS_ItemSelected.h"
#include "IGS_MenuTileWidget.generated.h"

class UBorder;
class UIGS_MenuTileDataBase;
class UIGS_SelectionLabelWidget;
class USpacer;
class UTexture2D;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_MenuTileWidget : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UIGS_MenuTileWidget();

    UFUNCTION()
    void SetSelectionType(EIGS_MenuTileSelectionType inType);

    UFUNCTION(BlueprintCallable)
    void SetItemData(UIGS_MenuTileDataBase* inItemData);

    UFUNCTION(BlueprintCallable)
    void SetIsItemSelected(bool inIsSelected);

    UFUNCTION(BlueprintCallable)
    void SetIsHoldForceDisabled(bool inHoldForceDisabled);

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshSizeSpacer();

    UFUNCTION(BlueprintImplementableEvent)
    void OnIsItemSelectedChanged(bool inIsSelected);

    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldTick_Internal(float InProgress);

    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldStarted_Internal();

    UFUNCTION()
    void OnHoldStarted();

    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldFinished_Internal();

    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldCancelled_Internal();

    UFUNCTION()
    void OnHoldCancelled();

private:
    UFUNCTION()
    FEventReply OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);

    UFUNCTION()
    FEventReply OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDataReady();

    UFUNCTION(BlueprintNativeEvent)
    void InitVisuals();

public:
    UFUNCTION(BlueprintCallable)
    void HandleReleasedKeyboard();

    UFUNCTION(BlueprintCallable)
    void HandlePressedKeyboard();

private:
    UFUNCTION()
    void HandleHoldTick();

    UFUNCTION()
    void HandleHoldFinished();

public:
    UFUNCTION(BlueprintPure)
    EIGS_MenuTileSize GetTileSize() const;

protected:
    UFUNCTION(BlueprintPure)
    float GetTextureAspectRatio(UTexture2D* inTexture);

public:
    UFUNCTION(BlueprintPure)
    EIGS_MenuTileSelectionType GetSelectionType() const;

    UFUNCTION(BlueprintCallable)
    UIGS_MenuTileDataBase* GetItemData();

    UFUNCTION(BlueprintPure)
    bool GetIsItemSelected() const;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ItemSelected OnItemSelected;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ItemConfirmed OnItemConfirmed;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D FullSize;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D HalfSize;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MenuTileSelectionType SelectionType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoldTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HoldTicksPerSecond;

protected:
    UPROPERTY(Instanced)
    USpacer* SizeSpacer;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_SelectionLabelWidget* SelectionLabel;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UBorder* HoldBorder;

private:
    UPROPERTY()
    UIGS_MenuTileDataBase* ItemData;

};
