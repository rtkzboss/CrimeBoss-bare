#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IdleChatterOutputPin.h"
#include "IGS_PlayIdleChatterAsyncAction.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class PAYBACK_API UIGS_PlayIdleChatterAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_PlayIdleChatterAsyncAction();

    UFUNCTION(BlueprintCallable)
    static UIGS_PlayIdleChatterAsyncAction* PlayIdleChatterAsyncAction(TArray<AIGS_GameCharacterFramework*> inCharacters);

    UPROPERTY(BlueprintAssignable)
    FIdleChatterOutputPin Succeed;

    UPROPERTY(BlueprintAssignable)
    FIdleChatterOutputPin Canceled;

protected:
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_Characters;

};
