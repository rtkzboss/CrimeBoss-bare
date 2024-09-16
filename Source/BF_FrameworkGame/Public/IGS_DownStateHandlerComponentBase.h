#pragma once
#include "CoreMinimal.h"
#include "IGS_DownStateHandlerComponentFramework.h"
#include "IGS_OnReviveStartEvent.h"
#include "IGS_OnReviveStopEvent.h"
#include "IGS_OnRevivedEvent.h"
#include "IGS_DownStateHandlerComponentBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DownStateHandlerComponentBase : public UIGS_DownStateHandlerComponentFramework {
    GENERATED_BODY()
public:
    UIGS_DownStateHandlerComponentBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnReviveStartEvent OnReviveStartedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnReviveStopEvent OnReviveStopEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnRevivedEvent OnRevivedEvent;

};
