#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "EIGS_BagType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HealthSectionWidget.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerStateFramework;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_HealthSectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_HealthSectionWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetShowRevives(bool inShow);

    UFUNCTION(BlueprintCallable)
    void SetPawnToMonitor(AIGS_GameCharacterFramework* inCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void RequestHide();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerStateReadyEvent(AIGS_PlayerStateFramework* inPS);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSlotsChanged();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewMonitoredPawn(AIGS_GameCharacterFramework* inPawn);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsDefendingChangedEvent(bool inIsDefending);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthStateChangedEvent(EIGS_HealthState inState);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthChangedEvent(float inRelativeHealth);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath();

    UFUNCTION()
    void LootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);

public:
    UPROPERTY(BlueprintReadOnly)
    float CurrentHealth;

    UPROPERTY(BlueprintReadOnly)
    float MaxHealth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLocalPlayer;

    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* PawnToMonitor;

};
