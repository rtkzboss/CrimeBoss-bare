#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "IGS_PingableWidgetActor.h"
#include "IGS_SmartPingableWidgetActor.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_SmartPingableWidgetActor : public AIGS_PingableWidgetActor {
    GENERATED_BODY()
public:
    AIGS_SmartPingableWidgetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActionData(EIGS_BotCommandDefinition inCommandDefinition, int32 playerNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetProgress(float InProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideText();
    
    UPROPERTY()
    float SmartPingHideTextTime;
    
    UPROPERTY()
    float HoldPingHideTextTime;
    
};

