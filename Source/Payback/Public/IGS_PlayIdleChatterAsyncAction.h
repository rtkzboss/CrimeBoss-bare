#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IdleChatterOutputPinDelegate.h"
#include "IGS_PlayIdleChatterAsyncAction.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_PlayIdleChatterAsyncAction;

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

