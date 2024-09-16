#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BotOrderPlannerOutputPin.h"
#include "IGS_BotOrderPlanner.generated.h"

class UObject;

UCLASS()
class BF_AI_API UIGS_BotOrderPlanner : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_BotOrderPlanner();

private:
    UFUNCTION()
    void ExecFinish(bool inPlayerResponse);

    UFUNCTION()
    void ExecExpire();

public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_BotOrderPlanner* BotOrderPlanner(UObject* inWorldContextObject, FText Text, float Cooldown, bool OverwriteExistingOrder, int32 AliveBotsNeeded);

    UPROPERTY(BlueprintAssignable)
    FBotOrderPlannerOutputPin Finished;

    UPROPERTY(BlueprintAssignable)
    FBotOrderPlannerOutputPin Interrupted;

};
