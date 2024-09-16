#pragma once
#include "CoreMinimal.h"
#include "EIGS_InfoMessageType.h"
#include "IGS_GlobalInventoryObject.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_InfoMessageManagerWidget.generated.h"

class UIGS_InfoMessagesManager;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UIGS_SuspicionManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_InfoMessageManagerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_InfoMessageManagerWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void AddItemMessage(UIGS_InventoryObjectFramework* inItem);

    UFUNCTION(BlueprintImplementableEvent)
    void AddInfoMessage(const FText& InText, EIGS_InfoMessageType inMessageType, float inDuration, int32 inHeisterNumber);

    UFUNCTION(BlueprintImplementableEvent)
    void AddGlobalItemMessage(TSubclassOf<UIGS_GlobalInventoryObject> inClass);

    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_InfoMessagesManager> InfoMessagesManager;

    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_ListInventory> PlayerInventory;

};
