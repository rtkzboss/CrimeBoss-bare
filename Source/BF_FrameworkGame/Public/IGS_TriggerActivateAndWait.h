#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_TriggerEventOutputPin.h"
#include "IGS_TriggerActivateAndWait.generated.h"

class AIGS_Trigger;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_TriggerActivateAndWait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_TriggerActivateAndWait();

    UFUNCTION(BlueprintCallable)
    static UIGS_TriggerActivateAndWait* TriggerActivateAndWait(AIGS_Trigger* inTrigger, bool inResetCount);

    UPROPERTY(BlueprintAssignable)
    FIGS_TriggerEventOutputPin Triggered;

};
