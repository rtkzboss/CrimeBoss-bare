#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "EIGS_CharacterID.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_TeammateHealthInfoSingleWidget.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerStateGame;
class UIGS_ObjectStatus;
class UIGS_PlayerStatus;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_TeammateHealthInfoSingleWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_TeammateHealthInfoSingleWidget();

    UFUNCTION(BlueprintNativeEvent)
    void UnregisterGameCharacterEvents(AIGS_GameCharacterFramework* inGameCharacter);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RelativeHealthChangedEvent(float inRelativeHealth);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void RegisterGameCharacterEvents(AIGS_GameCharacterFramework* inGameCharacter);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HealthStateChangedEvent(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeathEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CharacterIDChanged(EIGS_CharacterID inCharacterID);
    
public:
    UPROPERTY(BlueprintReadOnly)
    float CurrentRelativeHealth;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsBot;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* TeammatePawn;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_ObjectStatus* TeammateObjectStatus;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_PlayerStatus* TeammatePlayerStatus;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerStateGame* TeammatePlayerState;
    
};

