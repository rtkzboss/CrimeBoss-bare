#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_PlayerHealthList.generated.h"

class UIGS_HealthSectionWidget;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_PlayerHealthList : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_PlayerHealthList();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PostPlayerListChanged();

    UFUNCTION(BlueprintImplementableEvent)
    void OnNewPlayerWidget(UIGS_HealthSectionWidget* InWidget);

    UFUNCTION(BlueprintCallable)
    void ForcePlayerListRefresh();

};
