#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialActionType.h"
#include "Animation/AnimInstance.h"
#include "IGS_GameEventsAnimInstance.generated.h"

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_GameEventsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_GameEventsAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void ZiptieStarted_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void ZiptieEnd_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void ThrowAwayLoot_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void StunnedStart_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void StunnedEnd_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void SpecialAction_Event(EIGS_SpecialActionType inSpecialAction);

    UFUNCTION(BlueprintImplementableEvent)
    void Shoot_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void Reload_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void RappelLeaveStarted();

    UFUNCTION(BlueprintImplementableEvent)
    void RappelGrabStarted();

    UFUNCTION(BlueprintImplementableEvent)
    void PushCargo_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void PickupInteraction_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void OpenDoor_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void OnHolsterChange_Event(bool inIsHolstering);

    UFUNCTION(BlueprintImplementableEvent)
    void LootCollectionStart_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void LootCollectionEnd_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void LootBagPickupInteraction_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void FlashedStart_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void FlashedEnd_Event();

    UFUNCTION(BlueprintImplementableEvent)
    void CloseDoor_Event();

};
