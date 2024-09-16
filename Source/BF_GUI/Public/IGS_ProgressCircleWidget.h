#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ProgressCircleWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class AIGS_WeaponBase;
class AIGS_WieldableBase;
class UIGS_InteractiveComponent;
class UIGS_ReloaderBase;
class UIGS_WieldableInventoryObjectBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_ProgressCircleWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_ProgressCircleWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SpawnReloadCircle(bool inEnabled, float inDuration);

protected:
    UFUNCTION()
    void OnReviveStateChanged(bool bState, float inTotalTime);

    UFUNCTION()
    void OnInteractionFinished(bool inResult, UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION()
    void OnActiveWieldableChangedOnPlayer(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void InterruptReloadCircle();

    UFUNCTION()
    void HandleProgressCircle(bool inEnabled, float inDuration);

    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;

    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerControllerRoot* PlayerController;

protected:
    UPROPERTY(BlueprintReadOnly)
    float m_ReloadDuration;

    UPROPERTY(BlueprintReadOnly)
    AIGS_WeaponBase* m_ActiveWeapon;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_ReloaderBase* m_ActiveWeaponReloader;

};
