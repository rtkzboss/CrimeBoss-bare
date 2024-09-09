#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetChatRadialMenu.generated.h"

class UDataTable;
class UIGS_PlayerChatWheelComponent;
class UIGS_WidgetChatRadialSlice;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetChatRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
    UIGS_WidgetChatRadialMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleSliceClicked(UIGS_WidgetChatRadialSlice* inSlice);
    
private:
    UPROPERTY()
    UDataTable* m_DataTable;
    
    UPROPERTY(Instanced)
    UIGS_PlayerChatWheelComponent* PlayerChatWheelComponent;
    
};

