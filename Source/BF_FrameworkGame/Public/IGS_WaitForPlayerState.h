#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayerStateReadyOutputPin.h"
#include "IGS_WaitForPlayerState.generated.h"

class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForPlayerState : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForPlayerState();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForPlayerState* WaitForPlayerState(UObject* inWorldContextObject);

    UPROPERTY(BlueprintAssignable)
    FPlayerStateReadyOutputPin WhenPlayerStateReady;

};
