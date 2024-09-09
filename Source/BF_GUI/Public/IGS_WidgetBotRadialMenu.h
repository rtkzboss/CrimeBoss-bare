#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.h"
#include "EIGS_BotCommandDefinition.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetBotRadialMenu.generated.h"

class AController;
class AIGS_GameCharacterFramework;
class UIGS_PlayerCommandComponent;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetBotRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
    UIGS_WidgetBotRadialMenu();

private:
    UFUNCTION()
    void OnLootBagsCountChanged_Internal(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootBagsCountChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCommandedBot(EIGS_BotCommandDefinition inCommandDefinition);
    
    UFUNCTION(BlueprintCallable)
    void CancelBotMenu();
    
    UFUNCTION(BlueprintPure)
    bool CanBotDeliver(const AIGS_GameCharacterFramework* inBotReference) const;
    
    UFUNCTION(BlueprintCallable)
    void CallBotCommand(EIGS_BotCommandDefinition inCommand);
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AController*> BotControllers;
    
    UPROPERTY(Instanced)
    UIGS_PlayerCommandComponent* PlayerCommandComponent;
    
};

