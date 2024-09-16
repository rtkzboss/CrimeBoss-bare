#pragma once
#include "CoreMinimal.h"
#include "IGS_ChatWheelDataRow.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "IGS_WidgetChatRadialSlice.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetChatRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
    UIGS_WidgetChatRadialSlice();

    UFUNCTION(BlueprintPure)
    FIGS_ChatWheelDataRow GetData() const;

protected:
    UPROPERTY()
    FIGS_ChatWheelDataRow SliceData;

};
