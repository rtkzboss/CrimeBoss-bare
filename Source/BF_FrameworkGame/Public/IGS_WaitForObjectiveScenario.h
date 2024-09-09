#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ObjectiveScenarioReadyOutputPinDelegate.h"
#include "IGS_WaitForObjectiveScenario.generated.h"

class AIGS_ObjectiveScenarioBase;
class UIGS_WaitForObjectiveScenario;
class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForObjectiveScenario : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForObjectiveScenario();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForObjectiveScenario* WaitForObjectiveScenario(UObject* inWorldContextObject);
    
private:
    UFUNCTION()
    void ExecuteOnObjectiveScenarioReady(AIGS_ObjectiveScenarioBase* inObjScenario) const;
    
public:
    UPROPERTY(BlueprintAssignable)
    FObjectiveScenarioReadyOutputPin WhenObjectiveScenarioReady;
    
};

