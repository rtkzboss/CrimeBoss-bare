#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_LootBagInfoWidget.generated.h"

class AIGS_PlayerCharacter;
class UIGS_LootBagComponent;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_LootBagInfoWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_LootBagInfoWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UnregisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RegisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_LootBagComponent* LootBagComponent;
    
};

