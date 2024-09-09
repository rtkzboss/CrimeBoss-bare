#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetInventoryMenu.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_GUIController;
class UIGS_ListInventory;
class UIGS_WidgetMainInventory;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetInventoryMenu : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetInventoryMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetupInventoryContainer(UIGS_ListInventory* inOwningContainer) const;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_GUIController> GUIController;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WidgetMainInventory* InventoryWidget;
    
};

