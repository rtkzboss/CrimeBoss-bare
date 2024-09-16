#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_BlameWidget.generated.h"

class UIGS_SuspicionManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_BlameWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_BlameWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StrikesAdded(int32 inStrikes, int32 inStrikeIncrease, const FText& inBlame);

    UFUNCTION(BlueprintImplementableEvent)
    void OnAlarmTriggered(const FText& inBlame);

    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;

};
