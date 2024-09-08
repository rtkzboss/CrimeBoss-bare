#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "IGS_MenuController.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKBASE_API AIGS_MenuController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bComesFromMission;
    
    AIGS_MenuController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void ClientWasKickedEvent(const FText& KickReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClientForcedToLeaveLobbyEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ForceLeaveLobby();
    
};

