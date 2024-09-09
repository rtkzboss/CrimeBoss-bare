#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_SuspicionWidget.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UIGS_SuspicionManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_SuspicionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_SuspicionWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StrikesAdded(int32 inStrikes, int32 inStrikeIncrease, const FText& inBlame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerSuspicionChanged(AIGS_GameCharacterFramework* inPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSecurityTierChanged(EIGS_RoomSecurityType inRoomSecurity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HQSuspicionValueChanged(float inNewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HQSuspicionStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HQSuspicionEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Alarmed(const FText& inBlameText);
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerCharacter> PlayerPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerControllerRoot> PlayerController;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
};

