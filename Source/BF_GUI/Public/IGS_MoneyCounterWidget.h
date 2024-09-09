#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_MoneyCounterWidget.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_MoneyCounterWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_MoneyCounterWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveValue(int32 InValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddValue(int32 InValue);
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SecuredLoot;
    
};

