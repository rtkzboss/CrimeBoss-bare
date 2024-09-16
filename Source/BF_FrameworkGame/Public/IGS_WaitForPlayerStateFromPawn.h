#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayerStateFromPawnReadyOutputPin.h"
#include "IGS_WaitForPlayerStateFromPawn.generated.h"

class AIGS_PlayerCharacter;
class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForPlayerStateFromPawn : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForPlayerStateFromPawn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForPlayerStateFromPawn* WaitForPlayerStateFromPawn(UObject* inWorldContextObject, AIGS_PlayerCharacter* inPlayer);

    UPROPERTY(BlueprintAssignable)
    FPlayerStateFromPawnReadyOutputPin WhenPlayerStateReady;

};
