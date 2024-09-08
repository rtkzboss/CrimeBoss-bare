#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_RoomSecurityInfoWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_RoomSecurityInfoWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerControllerRoot* PlayerController;
    
    UIGS_RoomSecurityInfoWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowSecurityChanged(EIGS_RoomSecurityType inType);
    
protected:
    UFUNCTION()
    void OnSecurityTierChanged(EIGS_RoomSecurityType inType);
    
};

