#pragma once
#include "CoreMinimal.h"
#include "IGS_GlobalInventoryObject.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalInventoryNotificationWidget.generated.h"

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_GlobalInventoryNotificationWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_GlobalInventoryNotificationWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RemovedItemMessage(TSubclassOf<UIGS_GlobalInventoryObject> inObject, int32 inCurrentCount);

    UFUNCTION(BlueprintImplementableEvent)
    void AddedItemMessage(TSubclassOf<UIGS_GlobalInventoryObject> inObject, int32 inCurrentCount);

};
