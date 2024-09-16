#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetDragItem.generated.h"

class UImage;
class USizeBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetDragItem : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetDragItem();

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ColumnSize;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 rowSize;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Magnification;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* ItemImage;

    UPROPERTY(BlueprintReadOnly, Instanced)
    USizeBox* ItemSizeBox;

};
