#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionType.h"
#include "EIGS_InteractionWarningPriority.h"
#include "EIGS_InteractionWarningType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_UseTextWidget.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InteractiveComponent;
class UIGS_InventoryObjectFramework;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_UseTextWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_UseTextWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWarningText(EIGS_InteractionWarningType inType, EIGS_InteractionWarningPriority InPriority, bool inIsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateObjectiveVisual(bool inIsVisible, bool inObjectiveCompleted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBossDownVisual(bool inIsVisible, bool inIsBossDown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetVisibility();
    
protected:
    UFUNCTION()
    void OnInteractiveObjectIsNear(bool inEnabled, EIGS_InteractionType inType, UIGS_InteractiveComponent* inInteractiveComponent, TSubclassOf<UIGS_InventoryObjectFramework> inNeededItem);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionProgress(bool inEnabled, UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionClose(bool inEnabled, EIGS_InteractionType inType, UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldUsed(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldStarted(AIGS_GameCharacterFramework* inInstigator, float inHoldTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldCanceled(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCanUseChanged(bool inResult, TSubclassOf<UIGS_InventoryObjectFramework> inNeededItem);
    
    UFUNCTION(BlueprintPure)
    UIGS_InteractiveComponent* GetCurrentInteraction();
    
private:
    UPROPERTY(Instanced)
    UIGS_InteractiveComponent* m_CurrentInteraction;
    
};

