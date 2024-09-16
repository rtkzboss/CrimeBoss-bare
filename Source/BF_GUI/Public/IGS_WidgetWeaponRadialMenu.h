#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetWeaponRadialMenu.generated.h"

class AIGS_IntelligentGameCharacter;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_ListInventory;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetWeaponRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
    UIGS_WidgetWeaponRadialMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupInventory(UIGS_ListInventory* inInventory);

    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_ListInventory> OwningPlayerInventory;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_IntelligentGameCharacter> OwningPlayerCharacter;

    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_CharacterWieldablesHolderComponent> WieldableHolder;

};
