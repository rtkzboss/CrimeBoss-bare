#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_SecuredLootInfoWidget.generated.h"

class AIGS_PlayerCharacter;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SecuredLootInfoWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_SecuredLootInfoWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UnregisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void RegisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void RefreshLootInfo();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SecuredLootValue;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SoftCollectedLootValue;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float GoalValue;

};
