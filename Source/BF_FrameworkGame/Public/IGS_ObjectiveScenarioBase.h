#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ObjectiveScenarioBase.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ObjectiveScenarioBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_ObjectiveScenarioBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectivesReadyEvent();

};
